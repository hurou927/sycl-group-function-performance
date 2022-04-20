# SYCL: GroupFunction Latency

## Build & Run

```sh
# Fix compiler flag
$ make
$ ./main
```

## Result

- CPU: 11th Gen Intel(R) Core(TM) i7-11700K @ 3.60GHz
- GPU: Intel(R) UHD Graphics 750
- Memory: Crucial Technology CT16G4DFRA32A.M16FR
  - Array Handle: 0x003B
  - Error Information Handle: Not Provided
  - Total Width: 64 bits
  - Data Width: 64 bits
  - Size: 16384 MB
  - Form Factor: DIMM
  - Set: None
  - Locator: Controller0-ChannelA-DIMM1
  - Bank Locator: BANK 0
  - Type: DDR4
  - Type Detail: Synchronous
  - Speed: 3200 MT/s
  - Manufacturer: Crucial Technology
  - Serial Number: *******
  - Asset Tag: *******
  - Part Number: CT16G4DFRA32A.M16FR
  - Rank: 2
  - Configured Memory Speed: 3200 MT/s
  - Minimum Voltage: 1.2 V
  - Maximum Voltage: 1.2 V
  - Configured Voltage: 1.2 V
  - Memory Technology: DRAM
  - Memory Operating Mode Capability: Volatile memory
  - Firmware Version: Not Specified
  - Module Manufacturer ID: Bank 6, Hex 0x9B
  - Module Product ID: Unknown
  - Memory Subsystem Controller Manufacturer ID: Unknown
  - Memory Subsystem Controller Product ID: Unknown
  - Non-Volatile Size: None
  - Volatile Size: 16 GB
  - Cache Size: None
  - Logical Size: None

Type = Int
```tsv
method                     thread/block  threads  kernel(sub)  ms  kerenel(exe)  ms  kerenel(sub)  GB/s
inclusive_scan_over_group  1             threads  774.837      ms  771.238       ms  1.29662       GB/s
inclusive_scan_over_group  2             threads  387.533      ms  385.925       ms  2.59118       GB/s
inclusive_scan_over_group  4             threads  193.94       ms  193.117       ms  5.17821       GB/s
inclusive_scan_over_group  8             threads  97.0597      ms  96.6173       ms  10.3501       GB/s
inclusive_scan_over_group  16            threads  48.7699      ms  48.5087       ms  20.6149       GB/s
inclusive_scan_over_group  32            threads  24.5546      ms  24.4121       ms  40.9632       GB/s
inclusive_scan_over_group  64            threads  24.5545      ms  24.4123       ms  40.963        GB/s
inclusive_scan_over_group  128           threads  24.5532      ms  24.412        ms  40.9635       GB/s
inclusive_scan_over_group  256           threads  24.4782      ms  24.33         ms  41.1016       GB/s
inclusive_scan_over_group  512           threads  24.5621      ms  24.4111       ms  40.9649       GB/s
exclusive_scan_over_group  1             threads  774.678      ms  771.552       ms  1.29609       GB/s
exclusive_scan_over_group  2             threads  387.448      ms  385.861       ms  2.59161       GB/s
exclusive_scan_over_group  4             threads  193.943      ms  193.114       ms  5.17829       GB/s
exclusive_scan_over_group  8             threads  97.1566      ms  96.7133       ms  10.3398       GB/s
exclusive_scan_over_group  16            threads  48.755       ms  48.5128       ms  20.6131       GB/s
exclusive_scan_over_group  32            threads  24.5319      ms  24.3899       ms  41.0006       GB/s
exclusive_scan_over_group  64            threads  24.4351      ms  24.2944       ms  41.1617       GB/s
exclusive_scan_over_group  128           threads  24.5549      ms  24.4125       ms  40.9627       GB/s
exclusive_scan_over_group  256           threads  24.5688      ms  24.413        ms  40.9619       GB/s
exclusive_scan_over_group  512           threads  24.5547      ms  24.413        ms  40.9619       GB/s
reduce_over_group          1             threads  774.669      ms  771.548       ms  1.2961        GB/s
reduce_over_group          2             threads  387.533      ms  385.927       ms  2.59116       GB/s
reduce_over_group          4             threads  193.939      ms  193.118       ms  5.17818       GB/s
reduce_over_group          8             threads  97.1487      ms  96.7171       ms  10.3394       GB/s
reduce_over_group          16            threads  48.6233      ms  48.3853       ms  20.6674       GB/s
reduce_over_group          32            threads  24.5585      ms  24.4101       ms  40.9666       GB/s
reduce_over_group          64            threads  24.5621      ms  24.4226       ms  40.9457       GB/s
reduce_over_group          128           threads  24.5522      ms  24.4128       ms  40.9621       GB/s
reduce_over_group          256           threads  24.5582      ms  24.4153       ms  40.958        GB/s
reduce_over_group          512           threads  24.5407      ms  24.394        ms  40.9936       GB/s
```
