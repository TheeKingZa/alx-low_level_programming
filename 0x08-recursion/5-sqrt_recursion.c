#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number to find the square root of.
 *
 * Return: the square root of the number, or -1
 * if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
				/* Base case: If n is 0 or 1, return n. */
if (n == 0 || n == 1)
return (n);

				/* Recursive case: Check if i squared is equal to or greater than n. */
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
return (i);
}

				/* Error case: If no natural square root is found, return -1. */
return (-1);
}
