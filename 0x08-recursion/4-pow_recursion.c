#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base number.
 * @y: the exponent.
 * Return: the value of x raised to the power of y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
				/* Error case: If y is negative, return -1. */
if (y < 0)
return (-1);

				/* Base case: If y is 0, return 1. */
if (y == 0)
return (1);

				/* Recursive case: Return the product of x
				 * & the result of raising x to the power of y-1.
				 */
return (x * _pow_recursion(x, y - 1));
}
