# sshpc-omp-course

# 1 Hello World
#without fopenmp

```
gcc OMP-hello.c -o OMP-helloOM -fopenmp

./OMP-helloOM

gcc OMP-hello.c -o OMP-hello

./OMP-hello

export OMP_NUM_THREADS=3

./OMP-hello
```

# 2 Execution script

# 3 Function
```
gcc OMP-hello-function.c -o OMP-hello-function -fopenmp
OMP-hello-function./OMP-hello-function
```

# 4 Data Sharing Clauses
```
OMP-hello-function
gcc OMP-hello-PR-variable.c -o OMP-hello-PR-variable -fopenmp
./OMP-hello-PR-variable
```

# 5 Loop Worksharing
```
gcc OMP-loop-WorkSharing.c -o OMP-loop-WorkSharing -fopenmp
```

# 6 Performance Comparison

Serial version:

```
gcc OMP-matrix-sum.c -o OMP-matrix-sum

time ./OMP-matrix-sum
```

Parallel version:

```
gcc OMP-matrix-sum.c -o OMP-matrix-sumOM -fopenmp

time ./OMP-matrix-sumOM
```

# 7 Race condition

```
gcc OMP-race.c -o OMP-race -fopenmp
./OMP-race
```

# 8 Race condition - synchronization

critical, atomic, ordered

```
gcc OMP-race.c -o OMP-race -fopenmp
./OMP-race
```

# 9 Sycronization

```
gcc OMP-sync.c -o OMP-sync -fopenmp

./OMP-sync

```
# 10 Task

```
gcc OMP-task.c -o OMP-task

./OMP-task 
```

# 11 Fibonacci

```
gcc fib-no-recursion.c -o fib-no-recursion

./fib-no-recursion

gcc fib-no-recursion.c -o fib-no-recursionOM -fopenmp

./fib-no-recursionOM

gcc fib-task.c -o fib-task 

./fib-task 

gcc fib-task.c -o fib-taskOM -fopenmp

./fib-taskOM
```
