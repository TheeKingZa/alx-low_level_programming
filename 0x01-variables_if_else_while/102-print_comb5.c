#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 *              separated by a space, with each combination separated by a
 *              comma and a space. Numbers are printed with leading zeros when necessary.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
/* Iterate through all possible first two-digit numbers */
for (num1 = 0; num1 <= 99; num1++)
{
/* Iterate through all possible second two-digit numbers */
for (num2 = num1; num2 <= 99; num2++)
{
/* Print tens digit of first number */
putchar((num1 / 10) + '0');
/* Print ones digit of first number */
putchar((num1 % 10) + '0');
/* Print space */
putchar(' ');
/* Print tens digit of second number */
putchar((num2 / 10) + '0');
/* Print ones digit of second number */
putchar((num2 % 10) + '0');

/* Check if it's not the last combination */
if (!(num1 == 99 && num2 == 99))
{
/* Print comma and space */
putchar(',');
putchar(' ');
}
}
}

/* Print newline character */
putchar('\n');
return (0);
}
