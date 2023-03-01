#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string to append to.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting concatenated string.
 */
char *_strcat(char *dest, const char *src)
{
/* Keep track of the original destination pointer to return at the end*/
char *dest_ptr = dest;
/* Advance the destination pointer to the end of the string */
while (*dest != '\0')
{
dest++;
}
/* Copy the source string to the end of the destination string */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Terminate the concatenated string with a null byte */
*dest = '\0';
/* Return the original destination pointer */
return (dest_ptr);
}

