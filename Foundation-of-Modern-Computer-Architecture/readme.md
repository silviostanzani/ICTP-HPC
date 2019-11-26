# Foundation of Modern Computer Architecture 

```
lscpu
htop
lstopo
```

## Optimization with O3

```
gcc autoO3.c -o autoO3 -O0 -fopt-info-vec-missed
time ./autoO3
```
```
gcc autoO3.c -o autoO3 -O3 --fopt-info-vec
time ./autoO3
```

## Different Instruction Sets

```
gcc -g -O3 -march=ivybridge autovec.c -o autovec -fopt-info-vec -S
cat autovec | grep xmm
cat autovec | grep ymm
cat autovec | grep zmm
```

```
gcc -g -O3 -march=core-avx2 autovec.c -o autovec -fopt-info-vec -S
cat autovec | grep xmm
cat autovec | grep ymm
cat autovec | grep zmm
```

```
gcc -g -O3 -march=skylake autovec.c -o autovec -fopt-info-vec -S
cat autovec | grep xmm
cat autovec | grep ymm
cat autovec | grep zmm
```

```
gcc -g -O3 -march=skylake-avx512 autovec.c -o autovec -fopt-info-vec -S
cat autovec | grep xmm
cat autovec | grep ymm
cat autovec | grep zmm
```

## Compiling to specific Vector Instruction Set
```
gcc -g -O3 -march=skylake-avx512 autovec.c -o autovec -fopt-info-vec
./autovec
Illegal instruction (core dumped)
```

## Performance Comparison

```
gcc -g -O3 -march=ivybridge autovec.c -o autovecivy
gcc -g -O3 -march=core-avx2 autovec.c -o autovecavx2
gcc -g -O3 -march=skylake autovec.c -o autovecsky
time ./autovecivy
time ./autovecavx2
time ./autovecsky
```

## Data Layout

### AOS
```
gcc -O3 stride-test.c -o stride-test
time ./stride-test 
```

### SOA
```
gcc -O3 stride-test2.c -o stride-test2
time ./stride-test2 
```
