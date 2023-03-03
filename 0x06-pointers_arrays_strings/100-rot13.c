#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
char *p = s;  /* Pointer to traverse the string */

while (*p != '\0')
{
	/* Check if the character is an alphabetic letter */
if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'm'))
{
	/* Add 13 to the ASCII code of the letter */
*p += 13;
}
else if ((*p >= 'N' && *p <= 'Z') || (*p >= 'n' && *p <= 'z'))
{
	/* Subtract 13 from the ASCII code of the letter */
*p -= 13;
}

	/* Move to the next character in the string */
p++;
}

	/* Return the encoded string */
return (s);
}
