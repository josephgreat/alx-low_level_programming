#!/bin/sh
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
gcc main.c -L. -lall -o main.o
