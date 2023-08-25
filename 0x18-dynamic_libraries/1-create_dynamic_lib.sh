#!/usr/bin/bash

# Compile C source files with the Betty style
gcc *.c -c -fPIC 

# Create the shared library
gcc -shared *.o -o liball.so
