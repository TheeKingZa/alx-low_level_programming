#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
int divisor = 1;

		/* Handle negative numbers */
if (n < 0)
{
_putchar('-');
n = -n;
}

		/* Determine the divisor */
while (n / divisor >= 10)
{
divisor *= 10;
}

		/* Print each digit of the number */
while (divisor > 0)
{
_putchar((n / divisor) % 10 + '0');
divisor /= 10;
}
}
