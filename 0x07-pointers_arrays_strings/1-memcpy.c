#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest
 *
 * @dest: Pointer to the destination array where the content is to be copied
 * @src: Pointer to the source of data to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

/* Copy each byte of data from src to dest */
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
