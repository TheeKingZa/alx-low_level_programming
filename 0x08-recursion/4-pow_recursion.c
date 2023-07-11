#include "main.h"

/**
 * _pow_recursion - Calculates the Value of x raised to the power of y.
 *
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: The Value of x to the power of y.
 *		or -1 if y is negative.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
/* RETURN -1 to INDICATE an ERROR*/
if (y == 0)
	return (1);
/*x is raised to the power of "0 is 1" */
/*then*/
/*Recursive to calculate power */
return (x * _pow_recursion(x, y - 1));

}
