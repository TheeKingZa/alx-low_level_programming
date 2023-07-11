#!/bin/bash

#Compile each .c file into a corresponding .o file
gcc -c *.c

#Create the static library "liball.a" from the generated .o files
ar rcs liball.a

#clean up the .o files 
rm *.o
