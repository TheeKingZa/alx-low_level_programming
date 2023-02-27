#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;	/* Store Value of a*/
*a = *b;	/* Assign Value of B to A */
*b = temp;	/* Assign Value of temp to B */

printf("After swap: a=%d, b=%d\n", *a, *b);
}

int main(void)
{
int a = 98, b = 42;

printf("Before swap: a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("Back in main: a=%d, b=%d\n", a, b);

return (0);
}
