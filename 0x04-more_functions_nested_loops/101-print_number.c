#include <stdio.h>
#include "main.h"
/**
* print_number - Prints an integer
*
* @n: The integer to be printed
*
* Return: void
*/
void print_number(int n)
{
	/* Check if the is negative */
if (n < 0)
{
_putchar('-');	/* Print a minus sign */
n = -n;	/* Make the integer positive */
}
/* Check if the integer has more than ine digit */
if (n / 10 != 0)
{
print_number(n / 10);	/* Recursively print the integer with one less digit */
}
/* Print the least significant digit of the interger*/
_putchar(n % 10 + '0');
}
