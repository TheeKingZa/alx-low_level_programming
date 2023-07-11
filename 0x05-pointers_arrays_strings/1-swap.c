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
int temp = *a;/* Store the value of a in a temporary variable */
*a = *b;/* Assign the value of B to A */
*b = temp;/* Assign the value of the temporary variable to B */
}

/**
 * my_main - Entry point for the program
 *
 * Return: Always 0
 */

int my_main(void)
{
int a = 98;
int b = 42;

printf("%d, %d\n", a, b);/* Print the initial values of a and b*/
swap_int(&a, &b);/* Swap the values of a and b*/
printf("%d, %d\n", a, b);/*Print the new values of a and b */

return (0);
}
