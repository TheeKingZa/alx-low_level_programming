#!/usr/bin/python3

import ctypes

# Load the shared library
operations = ctypes.CDLL('./100-operations.so')

# Call the C functions
result_add = operations.add(66, -76)
result_sub = operations.sub(66, -76)
result_mul = operations.mul(66, -76)
result_div = operations.div(66, -76)
result_mod = operations.mod(66, -76)

print("Result of addition: ", result_add)
print("Result of subtraction: ", result_sub)
print("Result of multiplication: ", result_mul)
print("Result of division: ", result_div)
print("Result of Modulo: ", result_mod)
