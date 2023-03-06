#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

							/* Iterate over the elements of the matrix */
for (i = 0; i < size * size; i++)
{
							/* If the current element is on the first diagonal, add it to sum1 */
if (i % (size + 1) == 0)
sum1 += a[i];
							/* If the current element is on the second diagonal, add it to sum2 */
if (i % (size - 1) == 0 && i != 0 && i != size * size - 1)
sum2 += a[i];
}
							/* Print the sums of the diagonals */
printf("%d, %d\n", sum1, sum2);
}
