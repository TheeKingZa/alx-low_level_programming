#include "main.h"
#include <stdio.h>
/**
 * print_fibonacci - generates and prints the first 98 Fibonacci numbers
 * @a: the first number in the sequence
 * @b: the second number in the sequence
 * @count: the number of Fibonacci numbers printed so far
 */
void print_fibonacci(int a, int b, int count)
{
/* Base case: we have printed 98 numbers */
if (count >= 98)
{
printf("\n");
return;
}

/* Print the next number and continue the sequence */
printf("%d", a);
if (count < 97)
{
printf(", ");
}
print_fibonacci(b, a + b, count + 1);
}

/**
 * main - entry point, starts the Fibonacci sequence
 *
 * Return: always 0
 */
int main(void)
{
printf("1, 2, ");
print_fibonacci(1, 2, 2);
return (0);
}
