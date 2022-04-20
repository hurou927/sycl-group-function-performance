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
method                     thread/block  threads  kernel(sub)  ms  kerenel(exe)  ms  kerenel(sub)  GB/s  kernel(sub)  Giga-items/s
inclusive_scan_over_group  1             threads  1398.15      ms  1392.01       ms  0.718383      GB/s  0.179596     Giga-items/s
inclusive_scan_over_group  2             threads  699.245      ms  696.322       ms  1.43612       GB/s  0.35903      Giga-items/s
inclusive_scan_over_group  4             threads  349.676      ms  348.188       ms  2.87201       GB/s  0.718002     Giga-items/s
inclusive_scan_over_group  8             threads  175.115      ms  174.328       ms  5.73633       GB/s  1.43408      Giga-items/s
inclusive_scan_over_group  16            threads  84.5527      ms  84.1494       ms  11.8836       GB/s  2.97091      Giga-items/s
inclusive_scan_over_group  32            threads  48.1878      ms  47.9441       ms  20.8576       GB/s  5.2144       Giga-items/s
inclusive_scan_over_group  64            threads  58.0519      ms  57.7728       ms  17.3092       GB/s  4.32729      Giga-items/s
inclusive_scan_over_group  128           threads  77.0518      ms  76.6957       ms  13.0385       GB/s  3.25964      Giga-items/s
inclusive_scan_over_group  256           threads  115.033      ms  114.518       ms  8.73227       GB/s  2.18307      Giga-items/s
inclusive_scan_over_group  512           threads  212.821      ms  211.907       ms  4.71906       GB/s  1.17976      Giga-items/s
exclusive_scan_over_group  1             threads  1513.89      ms  1507.73       ms  0.66325       GB/s  0.165812     Giga-items/s
exclusive_scan_over_group  2             threads  757.144      ms  754.026       ms  1.32621       GB/s  0.331553     Giga-items/s
exclusive_scan_over_group  4             threads  378.762      ms  377.165       ms  2.65136       GB/s  0.662841     Giga-items/s
exclusive_scan_over_group  8             threads  189.545      ms  188.727       ms  5.29867       GB/s  1.32467      Giga-items/s
exclusive_scan_over_group  16            threads  90.712       ms  90.2911       ms  11.0753       GB/s  2.76882      Giga-items/s
exclusive_scan_over_group  32            threads  50.9048      ms  50.6532       ms  19.7421       GB/s  4.93552      Giga-items/s
exclusive_scan_over_group  64            threads  60.2574      ms  59.9668       ms  16.6759       GB/s  4.16897      Giga-items/s
exclusive_scan_over_group  128           threads  78.9088      ms  78.5437       ms  12.7318       GB/s  3.18294      Giga-items/s
exclusive_scan_over_group  256           threads  116.63       ms  116.115       ms  8.61216       GB/s  2.15304      Giga-items/s
exclusive_scan_over_group  512           threads  214.631      ms  213.717       ms  4.67909       GB/s  1.16977      Giga-items/s
reduce_over_group          1             threads  1492.87      ms  1486.8        ms  0.672585      GB/s  0.168146     Giga-items/s
reduce_over_group          2             threads  746.609      ms  743.553       ms  1.34489       GB/s  0.336223     Giga-items/s
reduce_over_group          4             threads  373.506      ms  371.938       ms  2.68862       GB/s  0.672155     Giga-items/s
reduce_over_group          8             threads  186.932      ms  186.125       ms  5.37272       GB/s  1.34318      Giga-items/s
reduce_over_group          16            threads  95.6634      ms  95.2271       ms  10.5012       GB/s  2.6253       Giga-items/s
reduce_over_group          32            threads  48.519       ms  48.2774       ms  20.7136       GB/s  5.1784       Giga-items/s
reduce_over_group          64            threads  26.9936      ms  26.8417       ms  37.2555       GB/s  9.31387      Giga-items/s
reduce_over_group          128           threads  32.3046      ms  32.1296       ms  31.1239       GB/s  7.78098      Giga-items/s
reduce_over_group          256           threads  42.8165      ms  42.6001       ms  23.4741       GB/s  5.86853      Giga-items/s
reduce_over_group          512           threads  63.1788      ms  62.8762       ms  15.9043       GB/s  3.97607      Giga-items/s
```

Type = long long int

```tsv
method                     thread/block  threads  kernel(sub)  ms  kerenel(exe)  ms  kerenel(sub)  GB/s  kernel(sub)  Giga-items/s
inclusive_scan_over_group  1             threads  1454.74      ms  1448.36       ms  0.690437      GB/s  0.0863046    Giga-items/s
inclusive_scan_over_group  2             threads  900.243      ms  896.539       ms  1.1154        GB/s  0.139425     Giga-items/s
inclusive_scan_over_group  4             threads  541.499      ms  539.256       ms  1.85441       GB/s  0.231801     Giga-items/s
inclusive_scan_over_group  8             threads  317.749      ms  316.411       ms  3.16045       GB/s  0.395056     Giga-items/s
inclusive_scan_over_group  16            threads  197.382      ms  196.535       ms  5.08816       GB/s  0.636019     Giga-items/s
inclusive_scan_over_group  32            threads  129.418      ms  128.841       ms  7.7615        GB/s  0.970188     Giga-items/s
inclusive_scan_over_group  64            threads  120.611      ms  120.074       ms  8.32822       GB/s  1.04103      Giga-items/s
inclusive_scan_over_group  128           threads  136.889      ms  136.282       ms  7.33773       GB/s  0.917217     Giga-items/s
inclusive_scan_over_group  256           threads  181.077      ms  180.29        ms  5.54663       GB/s  0.693329     Giga-items/s
inclusive_scan_over_group  512           threads  274.375      ms  273.215       ms  3.66012       GB/s  0.457515     Giga-items/s
exclusive_scan_over_group  1             threads  721.081      ms  718.112       ms  1.39254       GB/s  0.174068     Giga-items/s
exclusive_scan_over_group  2             threads  360.805      ms  359.271       ms  2.78341       GB/s  0.347926     Giga-items/s
exclusive_scan_over_group  4             threads  180.577      ms  179.791       ms  5.562         GB/s  0.69525      Giga-items/s
exclusive_scan_over_group  8             threads  90.4652      ms  90.0523       ms  11.1047       GB/s  1.38808      Giga-items/s
exclusive_scan_over_group  16            threads  45.1479      ms  44.9189       ms  22.2623       GB/s  2.78279      Giga-items/s
exclusive_scan_over_group  32            threads  25.6331      ms  25.4827       ms  39.2424       GB/s  4.9053       Giga-items/s
exclusive_scan_over_group  64            threads  30.285       ms  30.1164       ms  33.2045       GB/s  4.15056      Giga-items/s
exclusive_scan_over_group  128           threads  39.563       ms  39.3478       ms  25.4144       GB/s  3.1768       Giga-items/s
exclusive_scan_over_group  256           threads  58.5689      ms  58.2884       ms  17.1561       GB/s  2.14451      Giga-items/s
exclusive_scan_over_group  512           threads  107.256      ms  106.758       ms  9.367         GB/s  1.17088      Giga-items/s
reduce_over_group          1             threads  731.833      ms  728.827       ms  1.37207       GB/s  0.171509     Giga-items/s
reduce_over_group          2             threads  366.1        ms  364.574       ms  2.74293       GB/s  0.342866     Giga-items/s
reduce_over_group          4             threads  183.222      ms  182.443       ms  5.48118       GB/s  0.685147     Giga-items/s
reduce_over_group          8             threads  91.7899      ms  91.3759       ms  10.9438       GB/s  1.36798      Giga-items/s
reduce_over_group          16            threads  46.915       ms  46.682        ms  21.4215       GB/s  2.67769      Giga-items/s
reduce_over_group          32            threads  23.828       ms  23.6761       ms  42.2367       GB/s  5.27959      Giga-items/s
reduce_over_group          64            threads  13.6828      ms  13.5504       ms  73.7985       GB/s  9.22481      Giga-items/s
reduce_over_group          128           threads  16.3145      ms  16.2034       ms  61.7153       GB/s  7.71442      Giga-items/s
reduce_over_group          256           threads  21.5628      ms  21.4313       ms  46.6608       GB/s  5.8326       Giga-items/s
reduce_over_group          512           threads  31.7909      ms  31.6197       ms  31.6259       GB/s  3.95323      Giga-items/s
```

`inclusive_scan_over_group` is slow when computed type is 64-bit integer...?
