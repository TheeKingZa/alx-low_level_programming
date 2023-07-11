#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0; /* Initialize length variable to 0 */

while (*s != '\0')	/* Loop throu each string until null char found */
{
length++;		/* Increment length for each character */
s++;			/* Move to the next character in the string */
}

return (length);
/* Return the length of the string */
}
