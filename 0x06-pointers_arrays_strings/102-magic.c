#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Description: Initializes an array a of 5 integers &
* sets the value of its third element (a[2]) to 1024.
* Initializes an integer variable n and a
* pointer variable p that points to n's memory address.
* Sets the value of  the integer two positions
* ahead of the memory location pointed to by p to 98,
* effectively changing the value of n to 98.
* Prints the value of a[2]
* using printf.
* Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	(p + 2) = 98; /* new line of code */

	printf("a[2] = %d\n", a[2]);
	return (0);
}
