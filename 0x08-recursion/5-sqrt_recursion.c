#include "main.h"


/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n.
 *	-1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
/* Check if n is negative */
return (-1);
/* Return -1 to indicate an error */
if (n == 0 || n == 1)
/* Base cases: square root of 0 and 1 is the number itself */
return (n);

return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Helper function to perform the recursive calculation.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 *
 * Return: The natural square root of n.
 *	or -1 if n does not have a natural square root.
 */
int sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start > end)

/* Base case: no natural square root found */

return (-1);


if (mid * mid == n)

	/* Base case: found the natural square root */
return (mid);

if (mid * mid > n)
/* Recursive call: search in the lower half */
return (sqrt_helper(n, start, mid - 1));

return (sqrt_helper(n, mid + 1, end));
/* Recursive call: search in the upper half */
}
