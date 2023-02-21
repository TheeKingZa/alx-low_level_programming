#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if n is > zero, 0 if n is = zero, -1 if n is < zero
 */
int print_sign(int n)
{
/* Check if n is greater than 0 */
if (n > 0)
{
/* If so, print + and return 1 */
_putchar('+');
return (1);
}
/* If n is 0, print 0 and return 0 */
else if (n == 0)
{
_putchar('0');
return (0);
}
/* If n is less than 0, print - and return -1 */
else
{
_putchar('-');
return (-1);
}
}
