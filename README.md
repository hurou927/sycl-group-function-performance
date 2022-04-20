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
inclusive_scan_over_group  1             threads  1398.2       ms  1392.01       ms  0.718386      GB/s
inclusive_scan_over_group  2             threads  699.182      ms  696.306       ms  1.43615       GB/s
inclusive_scan_over_group  4             threads  349.794      ms  348.316       ms  2.87095       GB/s
inclusive_scan_over_group  8             threads  175.077      ms  174.318       ms  5.73666       GB/s
inclusive_scan_over_group  16            threads  84.4789      ms  84.0773       ms  11.8938       GB/s
inclusive_scan_over_group  32            threads  48.0118      ms  47.7605       ms  20.9378       GB/s
inclusive_scan_over_group  64            threads  58.0065      ms  57.7205       ms  17.3249       GB/s
inclusive_scan_over_group  128           threads  77.0356      ms  76.6736       ms  13.0423       GB/s
inclusive_scan_over_group  256           threads  114.988      ms  114.475       ms  8.7355        GB/s
inclusive_scan_over_group  512           threads  212.604      ms  211.703       ms  4.7236        GB/s
exclusive_scan_over_group  1             threads  1513.81      ms  1507.71       ms  0.663259      GB/s
exclusive_scan_over_group  2             threads  757.104      ms  754.001       ms  1.32626       GB/s
exclusive_scan_over_group  4             threads  378.739      ms  377.162       ms  2.65138       GB/s
exclusive_scan_over_group  8             threads  189.55       ms  188.728       ms  5.29863       GB/s
exclusive_scan_over_group  16            threads  90.7115      ms  90.2901       ms  11.0754       GB/s
exclusive_scan_over_group  32            threads  50.9167      ms  50.6683       ms  19.7362       GB/s
exclusive_scan_over_group  64            threads  60.2264      ms  59.9321       ms  16.6855       GB/s
exclusive_scan_over_group  128           threads  78.7953      ms  78.4355       ms  12.7493       GB/s
exclusive_scan_over_group  256           threads  116.531      ms  116.003       ms  8.62046       GB/s
exclusive_scan_over_group  512           threads  214.196      ms  213.296       ms  4.68832       GB/s
reduce_over_group          1             threads  1492.78      ms  1486.77       ms  0.672598      GB/s
reduce_over_group          2             threads  746.526      ms  743.493       ms  1.345         GB/s
reduce_over_group          4             threads  373.473      ms  371.93        ms  2.68868       GB/s
reduce_over_group          8             threads  186.814      ms  186.011       ms  5.37602       GB/s
reduce_over_group          16            threads  95.6519      ms  95.2121       ms  10.5029       GB/s
reduce_over_group          32            threads  48.5213      ms  48.2738       ms  20.7152       GB/s
reduce_over_group          64            threads  26.9565      ms  26.7947       ms  37.3208       GB/s
reduce_over_group          128           threads  32.2712      ms  32.0958       ms  31.1568       GB/s
reduce_over_group          256           threads  42.7531      ms  42.5172       ms  23.5199       GB/s
reduce_over_group          512           threads  63.3806      ms  63.0749       ms  15.8542       GB/s
```
