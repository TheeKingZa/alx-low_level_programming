#!/bin/bash

# Compile C source files with the Betty style
gcc *.c -c -fPIC 

# Create the shared library
gcc *.o -shared -o liball.so
