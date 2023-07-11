#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, computes sum of multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
int i, sum;

/* Initialize sum to 0 */
sum = 0;

/* Iterate over numbers from 0 to 1023 */
for (i = 0; i < 1024; i++)
{
/* Check if current number is a multiple of 3 or 5 */
if (i % 3 == 0 || i % 5 == 0)
{
/* Add current number to the sum */
sum += i;
}
}

/* Print the sum */
printf("%d\n", sum);

return (0);
}
