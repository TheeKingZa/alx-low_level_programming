#include <stdio.h>
#include "main.h"
#include "holberton.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
_putchar('\n'); /* Print newline character */
return;
}

_putchar(*s); /* Print current character */
_puts_recursion(s + 1); /* Call function recursively with next character */
}
