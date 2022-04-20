#include <CL/sycl.hpp>
#include <cstddef>
#include <iomanip>
#include <iostream>
#define STR(var) #var
using namespace cl::sycl;
using namespace std;

using ITEM_T = int;

class Event {
public:
  event kernel_event;
  double kernel_elapesed_ms;
};

double get_submission_ms(event e) {
  auto end = e.get_profiling_info<sycl::info::event_profiling::command_end>();
  auto start =
      e.get_profiling_info<sycl::info::event_profiling::command_start>();
  return (end - start) / 1.0e6;
};

double elaspsed_ms(std::chrono::steady_clock::time_point &start,
                   std::chrono::steady_clock::time_point &end) {
  return std::chrono::duration_cast<std::chrono::nanoseconds>(end - start)
             .count() /
         1e6;
};

enum method { IScan = 1, EScan = 2, Reduce = 3 };

template <typename T>
Event run_kernel(queue &q, size_t num_items, size_t num_threads_per_block,
                 method m) {

  T *DEVICE_WRITE_DUMMY = static_cast<T *>(malloc_device(sizeof(T), q));
  auto kernel_start = std::chrono::steady_clock::now();
  event kernel_event = q.submit([&](handler &cgh) {
    auto localRange = range<1>(num_threads_per_block);
    auto iscankernel = [=](nd_item<1> it) {
      int localX = it.get_local_id(0);
      int globalX = it.get_global_id(0);

      int x = inclusive_scan_over_group(it.get_group(), localX, cl::sycl::plus<>());
      if (x > num_items * 2) {
        DEVICE_WRITE_DUMMY[0] = x;
      }
    };
    auto escankernel = [=](nd_item<1> it) {
      int localX = it.get_local_id(0);
      int globalX = it.get_global_id(0);

      int x = exclusive_scan_over_group(it.get_group(), localX, cl::sycl::plus<>());
      if (x > num_items * 2) {
        DEVICE_WRITE_DUMMY[0] = x;
      }
    };
    auto reducekernel = [=](nd_item<1> it) {
      int localX = it.get_local_id(0);
      int globalX = it.get_global_id(0);

      int x = reduce_over_group(it.get_group(), localX, cl::sycl::plus<>());
      if (x > num_items * 2) {
        DEVICE_WRITE_DUMMY[0] = x;
      }
    };
    switch (m) {
      case IScan:
        cgh.parallel_for<class iscan>(nd_range<1>{range<1>(num_items), localRange}, iscankernel);
        break;
      case EScan:
        cgh.parallel_for<class escan>(nd_range<1>{range<1>(num_items), localRange}, escankernel);
        break;
      case Reduce:
        cgh.parallel_for<class reduce>(nd_range<1>{range<1>(num_items), localRange}, reducekernel);
        break;
    }
  });
  kernel_event.wait();
  auto kernel_end = std::chrono::steady_clock::now();
  auto kernel_elapsed_ms = elaspsed_ms(kernel_start, kernel_end);
  free(DEVICE_WRITE_DUMMY, q);

  return Event{
      .kernel_event = kernel_event,
      .kernel_elapesed_ms = kernel_elapsed_ms,
  };
}

string str(method m) {
  switch (m) {
  case IScan:
    return "inclusive_scan_over_group";
  case EScan:
    return "exclusive_scan_over_group";
  case Reduce:
    return "reduce_over_group";
  }
}

void copy(queue &q, size_t bytes, size_t num_threads_per_block, method m) {
  size_t mbytes = bytes / 1024 / 1024;
  size_t num_items = bytes / sizeof(ITEM_T);
  auto result = run_kernel<ITEM_T>(q, num_items, num_threads_per_block, m);
  cout << str(m) << "," << num_threads_per_block << ",threads,"
       << result.kernel_elapesed_ms << ",ms,"
       << get_submission_ms(result.kernel_event) << ",ms,"
       << mbytes / get_submission_ms(result.kernel_event) * 1e3 / 1024
       << ",GB/s,"
       << "\n";
}

int main(int argc, char *argv[]) {

  gpu_selector d_selector;
  queue q(d_selector);
  cout << "Running on device: " << q.get_device().get_info<info::device::name>()
       << "\n";
  cout << "sub: submission time(elapsed time by chrono)\n";
  cout << "exe: execution time(sycl::event.command_end - "
          "sycl::event.command_start)\n\n";
  cout << "method,"
       << "thread/block"
       << ",threads,"
       << "kernel(sub)"
       << ",ms,"
       << "kerenel(exe)"
       << ",ms,"
       << "kerenel(sub)"
       << ",GB/s,"
       << "\n";
  for (size_t th = 1; th <= 512; th = th << 1) {
    copy(q, 1024 * 1024 * 1024, th, IScan);
  }
  for (size_t th = 1; th <= 512; th = th << 1) {
    copy(q, 1024 * 1024 * 1024, th, EScan);
  }
  for (size_t th = 1; th <= 512; th = th << 1) {
    copy(q, 1024 * 1024 * 1024, th, Reduce);
  }
  return 0;
}
