#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
int i, j, product;

/* Only print times table if n is between 0 and 15 */
if (n >= 0 && n <= 15)
{
/* Iterate over rows (0 to n) */
for (i = 0; i <= n; i++)
{
/* Iterate over columns (0 to n) */
for (j = 0; j <= n; j++)
{
/* Calculate product */
product = i * j;
/* Print with appropriate formatting */
if (j == 0)
{
printf("%d", product);
}
else if (product < 10)
{
printf(",   %d", product);
}
else if (product < 100)
{
printf(",  %d", product);
}
else
{
printf(", %d", product);
}
}
/* Move to the next row*/
printf("\n");
}
}
}

