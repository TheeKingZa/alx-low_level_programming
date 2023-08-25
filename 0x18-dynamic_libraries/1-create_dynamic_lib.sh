#!/usr/bin/bash

# Compile C source files with the Betty style
gcc -Wall -c -fPIC *.c

# Create the shared library
gcc -shared *.o -o liball.so
