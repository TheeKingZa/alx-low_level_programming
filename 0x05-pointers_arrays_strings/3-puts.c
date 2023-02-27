#include "main.h"
#include <stdio.h>
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 *
 * @str: The string to be printed.
 */
void _puts(char *str)
{
int i = 0;
/* Initialize loop counter */

while (str[i] != '\0')
/*
* Loop through each character in
* the string until null
* character is found
*/

{

putchar(str[i]);

/* Print each character */

i++;

/* Move to the next character in the string */
}

putchar('\n');
/* Print a new line after the string */
}
