#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n
 * or -1 if @n has no natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (find_sqrt(n, 1));
}
/**
 * find_sqrt - Finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The current number to check for being the square root.
 *
 * Return: The natural square root of @n
 * or -1 if @n has no natural square root.
 */
int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (find_sqrt(n, i + 1));
}
