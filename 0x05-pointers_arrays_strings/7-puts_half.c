#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 *
 * @str: The string to print.
 */
void puts_half(char *str)
{
int len = 0, i = 0;

/* Find the length of the string */
while (str[len] != '\0')
{
len++;
}

/* Print the second half of the string */
for (i = (len + 1) / 2; i < len; i++)
{
putchar(str[i]);
}

putchar('\n'); /* Print a newline character at the end */
}
