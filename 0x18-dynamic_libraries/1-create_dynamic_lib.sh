#!/bin/bash
gcc -fPIC  -c *.c main.h
gcc -shared -o liball.so *.o
