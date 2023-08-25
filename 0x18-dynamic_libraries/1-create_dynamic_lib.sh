/** File: compile_and_creates lib.sh
 *
 * This script compiles C source files into shared library Betty style.
 * 
 */

#!/usr/bin/env bash

# Compile C source files with the Betty style
gcc -Wall -c -fPIC *.c

# Create the shared library
gcc -shared *.o -o liball.so
