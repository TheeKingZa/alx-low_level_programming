#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

/* Find the length of dest string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append src string to the dest string */
for (i = 0; src[i] != '\0'; i++)
dest[dest_len++] = src[i];

/* Add a terminating null byte to the end of the string */
dest[dest_len] = '\0';

/* Return a pointer to the resulting string dest */
return (dest);
}

