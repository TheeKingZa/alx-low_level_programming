#include "main.h"

/**
 * wildcmp - Compares two strings, considering the wildcard character *.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0') /* Base case: end of both strings */
return (1);

if (*s2 == '*')
{
if (*s1 == '\0') /* Case where * replaces an empty string */
return (wildcmp(s1, s2 + 1));

if (wildcmp(s1 + 1, s2) == 1) /* Check if * matches current character */
return (1);

return (wildcmp(s1, s2 + 1)); /* Check if * matches an empty string */
}

if (*s1 == *s2) /* If current characters match, move on to next */
return (wildcmp(s1 + 1, s2 + 1));

return (0); /* Strings are not identical */
}
