#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;

/* Find the length of the destination string (dest) */
i = 0;
while (dest[i] != '\0')
/* Loop until the end of the string */
{
	i++;
}

j = 0;
while (src[j] != '\0')
{
	dest[i] = src[j];
	i++;
	j++;
}

dest[i] = '\0';

return (dest);
}
