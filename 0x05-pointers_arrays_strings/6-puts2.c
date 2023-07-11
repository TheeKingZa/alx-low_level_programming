#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 *
 * @str: The string to print.
 */
void puts2(char *str)
{
int i = 0; /* Initialize loop counter */

/* Loop through each character in the string */
while (str[i] != '\0')
{
/* Print the character if its index is even */
if (i % 2 == 0)
{
putchar(str[i]);
}

i++; /* Increment the loop counter to move to the next character */
}

putchar('\n'); /* Print a newline character at the end */
}
