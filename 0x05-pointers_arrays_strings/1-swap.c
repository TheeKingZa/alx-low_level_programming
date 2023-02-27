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

/**
 * my_main - Entry point for the program
 *
 * Return: Always 0
 */

int my_main(void)
{
int a = 98, b = 42;

printf("%d, %d\n", a, b);	/* print the Initial value of A and B */
swap_int(&a, &b);		/* Swap the values of A & B */
printf("%d, %d\n", a, b);	/* print the new value of A & B */

return (0);
}
