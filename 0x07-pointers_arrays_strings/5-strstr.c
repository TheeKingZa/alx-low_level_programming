#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring in a string
* @haystack: pointer to string to search in
* @needle: pointer to substring to search for
*
* Return: pointer to beginning of located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
int needle_len = 0, i = 0, j = 0;
char *substr_start = haystack;

/* calculate length of needle */
while (needle[needle_len] != '\0')
{
needle_len++;
}

/* search for needle in haystack */
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[j])
{
/* found start of potential substring */
if (j == 0)
{
substr_start = &haystack[i];
}
/* check if entire needle is a substring */
if (j == needle_len - 1)
{
return (substr_start);
}
j++;
}
else
{
j = 0;
}
}
return (NULL);
}
