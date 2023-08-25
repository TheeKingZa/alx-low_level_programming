#!/usr/bin/bash

# Compile C source files with the Betty style
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c

# Create the shared library
gcc -shared *.o -o liball.so

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
