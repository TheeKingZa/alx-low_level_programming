#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of bytes to use from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

while (dest[dest_len] != '\0')		/* Get the length of dest */
dest_len++;

while (src[i] != '\0' && i < n)		/* Copy src to dest */
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0';
/* Null terminate dest */

return (dest);
}
