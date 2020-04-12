#! /bin/bash

executable=$1
rm -rf *.o
gcc -c *.c
gcc -o $1 *.o
./${executable}
rm -rf ${executable}
rm -rf *.o