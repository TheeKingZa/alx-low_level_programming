#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
int length = 0;
/* Initialize length variable to 0 */
int i; /* Initialize loop counter */

/* Loop through each character in the string to get the length */
while (s[length] != '\0')
{
length++;
}

/* Loop through each character in the string in reverse order */
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]); /* Print each character */
}

putchar('\n'); /* Print a new line after the reversed string */
}
