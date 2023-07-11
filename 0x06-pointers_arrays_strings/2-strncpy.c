#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copies a string.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')		/* Copy src to dest */
{
dest[i] = src[i];
i++;
}
while (i < n)				/* Pad the rest of dest with null characters */
{
dest[i] = '\0';
i++;
}

return (dest);
}
