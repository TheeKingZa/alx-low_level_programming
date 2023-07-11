#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 *
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

/* check if c is the null terminator */
if (c == '\0')
{
return (s);
}

/* c was not found in s */
return (NULL);
}
