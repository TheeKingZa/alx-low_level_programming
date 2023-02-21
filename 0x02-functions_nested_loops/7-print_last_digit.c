#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Number to extract the last digit from
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

/* Calculate the last digit */
last_digit = n % 10;

/* Convert negative value to positive if necessary */
if (last_digit < 0)
last_digit = -last_digit;

/* Print the last digit */
_putchar(last_digit + '0');

return (last_digit);
}
