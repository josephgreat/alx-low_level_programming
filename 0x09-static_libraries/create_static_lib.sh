#!/bin/sh
gcc -c !main.c *.c
ar -rc liball.a *.o
ranlib liball.a
gcc main.c -L. -lall -o main.o
