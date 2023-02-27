#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 *
 * @dest: The buffer to copy the string to.
 * @src: The string to copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;

/* Copy each character of the string, including the null byte */
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Add the null byte to the end of the copied string */
dest[i] = '\0';

/* Return a pointer to the destination string */
return (dest);
}
