#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to the string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
				/* Base case: If the string is empty or null, return. */
if (*s == '\0' || s == NULL)
return;

				/**
				* Recursive call: Call the function recursively on the next
				* character in the string and then
				* print the current character.
				*/
_print_rev_recursion(s + 1);
putchar(*s);
}
