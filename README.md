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
inclusive_scan_over_group  1             threads  1338.42      ms  1332.59       ms  0.750416      GB/s  0.187604     Giga-items/s
inclusive_scan_over_group  2             threads  669.348      ms  666.606       ms  1.50014       GB/s  0.375034     Giga-items/s
inclusive_scan_over_group  4             threads  334.842      ms  333.451       ms  2.99894       GB/s  0.749735     Giga-items/s
inclusive_scan_over_group  8             threads  167.62       ms  166.882       ms  5.99225       GB/s  1.49806      Giga-items/s
inclusive_scan_over_group  16            threads  83.8757      ms  83.4754       ms  11.9796       GB/s  2.99489      Giga-items/s
inclusive_scan_over_group  32            threads  47.1374      ms  46.9025       ms  21.3208       GB/s  5.33021      Giga-items/s
inclusive_scan_over_group  64            threads  57.3043      ms  57.0315       ms  17.5342       GB/s  4.38355      Giga-items/s
inclusive_scan_over_group  128           threads  76.9547      ms  76.5912       ms  13.0563       GB/s  3.26408      Giga-items/s
inclusive_scan_over_group  256           threads  115.611      ms  115.104       ms  8.68783       GB/s  2.17196      Giga-items/s
inclusive_scan_over_group  512           threads  214.681      ms  213.77        ms  4.67793       GB/s  1.16948      Giga-items/s

exclusive_scan_over_group  1             threads  1339.33      ms  1333.93       ms  0.749664      GB/s  0.187416     Giga-items/s
exclusive_scan_over_group  2             threads  669.706      ms  666.986       ms  1.49928       GB/s  0.374821     Giga-items/s
exclusive_scan_over_group  4             threads  335.097      ms  333.711       ms  2.9966        GB/s  0.749151     Giga-items/s
exclusive_scan_over_group  8             threads  167.75       ms  167.008       ms  5.98774       GB/s  1.49693      Giga-items/s
exclusive_scan_over_group  16            threads  85.1111      ms  84.7025       ms  11.806        GB/s  2.95151      Giga-items/s
exclusive_scan_over_group  32            threads  48.4151      ms  48.1681       ms  20.7606       GB/s  5.19016      Giga-items/s
exclusive_scan_over_group  64            threads  58.0622      ms  57.7858       ms  17.3053       GB/s  4.32633      Giga-items/s
exclusive_scan_over_group  128           threads  76.9699      ms  76.6088       ms  13.0533       GB/s  3.26333      Giga-items/s
exclusive_scan_over_group  256           threads  114.64       ms  114.136       ms  8.76146       GB/s  2.19036      Giga-items/s
exclusive_scan_over_group  512           threads  213.844      ms  212.947       ms  4.69601       GB/s  1.174        Giga-items/s

reduce_over_group          1             threads  1515.35      ms  1509.26       ms  0.662576      GB/s  0.165644     Giga-items/s
reduce_over_group          2             threads  757.874      ms  754.791       ms  1.32487       GB/s  0.331218     Giga-items/s
reduce_over_group          4             threads  379.043      ms  377.458       ms  2.6493        GB/s  0.662326     Giga-items/s
reduce_over_group          8             threads  189.75       ms  188.933       ms  5.29287       GB/s  1.32322      Giga-items/s
reduce_over_group          16            threads  98.4998      ms  98.0383       ms  10.2001       GB/s  2.55002      Giga-items/s
reduce_over_group          32            threads  51.4956      ms  51.245        ms  19.5141       GB/s  4.87852      Giga-items/s
reduce_over_group          64            threads  27.8433      ms  27.6873       ms  36.1176       GB/s  9.02941      Giga-items/s
reduce_over_group          128           threads  33.139       ms  32.9626       ms  30.3374       GB/s  7.58435      Giga-items/s
reduce_over_group          256           threads  43.5404      ms  43.3222       ms  23.0829       GB/s  5.77072      Giga-items/s
reduce_over_group          512           threads  63.6844      ms  63.3859       ms  15.7764       GB/s  3.94409      Giga-items/s
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
