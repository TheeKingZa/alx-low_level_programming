#include "main.h"

/**
* _puts_recursion - Prints a string followed by a new line.
* @s: The input string to be printed.
*
* Description: This function recursively prints each character of the input
* string until it reaches the null terminator ('\0'), at which point it
* prints a new line character ('\n').
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		/* end of string?  then..*/
	{
		putchar('\n');
		return;
		/* print rewLine then Return. */
	}
putchar(*s); /*Prints The Character*/

_puts_recursion(s + 1); /*Call Recursive to Pint Next character */
}
