#include "main.h"

/**
* print_diagonal - Draws a diagonal line on the terminal
* @n: The number of times the character '\' should be printed
*
* Description: Prints a diagonal line on the terminal using the '\' character.
* If n is less than or equal to 0, only a newline character is printed.
*
* Return: void
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');

_putchar('\');
_putchar('\n');
}
}

/**
* main - Entry point
*
* Description: Calls the print_diagonal function with several different values
* to test its functionality.
*
* Return: Always 0
*/
int main(void)
{
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);
return (0);
}
