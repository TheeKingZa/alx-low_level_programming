#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @b: constant byte to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

/* fill the first n bytes of memory pointed by s with b */
for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
