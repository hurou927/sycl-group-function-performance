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
inclusive_scan_over_group  1             threads  1456.87      ms  1450.5        ms  0.689419      GB/s  0.0861773    Giga-items/s
inclusive_scan_over_group  2             threads  900.697      ms  897.005       ms  1.11482       GB/s  0.139353     Giga-items/s
inclusive_scan_over_group  4             threads  542.018      ms  539.786       ms  1.85259       GB/s  0.231573     Giga-items/s
inclusive_scan_over_group  8             threads  318.293      ms  316.967       ms  3.1549        GB/s  0.394363     Giga-items/s
inclusive_scan_over_group  16            threads  197.681      ms  196.838       ms  5.08032       GB/s  0.63504      Giga-items/s
inclusive_scan_over_group  32            threads  129.331      ms  128.756       ms  7.76664       GB/s  0.97083      Giga-items/s
inclusive_scan_over_group  64            threads  121.261      ms  120.728       ms  8.28306       GB/s  1.03538      Giga-items/s
inclusive_scan_over_group  128           threads  137.597      ms  136.998       ms  7.29937       GB/s  0.912421     Giga-items/s
inclusive_scan_over_group  256           threads  181.807      ms  181.022       ms  5.5242        GB/s  0.690524     Giga-items/s
inclusive_scan_over_group  512           threads  273.993      ms  272.841       ms  3.66514       GB/s  0.458143     Giga-items/s

exclusive_scan_over_group  1             threads  1502.57      ms  1496.47       ms  0.668239      GB/s  0.0835299    Giga-items/s
exclusive_scan_over_group  2             threads  926.607      ms  922.814       ms  1.08364       GB/s  0.135455     Giga-items/s
exclusive_scan_over_group  4             threads  556.508      ms  554.217       ms  1.80435       GB/s  0.225543     Giga-items/s
exclusive_scan_over_group  8             threads  325.368      ms  324.001       ms  3.08641       GB/s  0.385801     Giga-items/s
exclusive_scan_over_group  16            threads  204.07       ms  203.204       ms  4.92117       GB/s  0.615147     Giga-items/s
exclusive_scan_over_group  32            threads  132.873      ms  132.281       ms  7.55965       GB/s  0.944956     Giga-items/s
exclusive_scan_over_group  64            threads  125.407      ms  124.849       ms  8.0097        GB/s  1.00121      Giga-items/s
exclusive_scan_over_group  128           threads  141.255      ms  140.644       ms  7.11016       GB/s  0.88877      Giga-items/s
exclusive_scan_over_group  256           threads  185.502      ms  184.707       ms  5.41398       GB/s  0.676747     Giga-items/s
exclusive_scan_over_group  512           threads  277.576      ms  276.416       ms  3.61774       GB/s  0.452217     Giga-items/s

reduce_over_group          1             threads  3280.52      ms  3267.3        ms  0.306063      GB/s  0.0382579    Giga-items/s
reduce_over_group          2             threads  1640.47      ms  1633.8        ms  0.61207       GB/s  0.0765087    Giga-items/s
reduce_over_group          4             threads  820.405      ms  817.05        ms  1.22392       GB/s  0.152989     Giga-items/s
reduce_over_group          8             threads  221.288      ms  220.344       ms  4.53837       GB/s  0.567296     Giga-items/s
reduce_over_group          16            threads  119.773      ms  119.236       ms  8.38675       GB/s  1.04834      Giga-items/s
reduce_over_group          32            threads  65.9762      ms  65.654        ms  15.2314       GB/s  1.90392      Giga-items/s
reduce_over_group          64            threads  53.6878      ms  53.415        ms  18.7213       GB/s  2.34017      Giga-items/s
reduce_over_group          128           threads  73.8568      ms  73.5156       ms  13.6026       GB/s  1.70032      Giga-items/s
reduce_over_group          256           threads  114.059      ms  113.555       ms  8.80628       GB/s  1.10079      Giga-items/s
reduce_over_group          512           threads  216.667      ms  215.753       ms  4.63493       GB/s  0.579366     Giga-items/s
```
