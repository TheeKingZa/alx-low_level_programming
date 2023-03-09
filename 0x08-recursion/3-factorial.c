#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be calculated.
 * Return: the factorial of the given number, or -1 if the number is negative.
 */
int factorial(int n)
{
				/* Base case: If the number is 0, return 1. */
if (n == 0)
return (1);

				/* Error case: If the number is negative, return -1. */
if (n < 0)
return (-1);

				/* Recursive case: Return the product of the number 
				 * & the factorial of the number minus 1.
				 */
return (n * factorial(n - 1));
}
