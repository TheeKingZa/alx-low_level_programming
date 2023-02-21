#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
if (n < 0)	/* Check if the number is negative */
return (-n);	/* If so, return the negative of the number */
else
return (n);	/* Otherwise, return the number itself */
}
