#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: The array of integers to print.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
int i;

/* Print each element of the array, separated by a comma and space */
for (i = 0; i < n; i++)
{
printf("%d", a[i]);

/* If this is not the last element, print a comma and space */
if (i < n - 1)
{
printf(", ");
}
}

printf("\n"); /* Print a newline character at the end */
}
