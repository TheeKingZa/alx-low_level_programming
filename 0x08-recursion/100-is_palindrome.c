#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* base case: both strings are empty */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* special case: * in s2 matches any string */
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);

/* case: current characters match, continue comparison */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* case: current characters don't match, but * in s2 can replace it */
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

return (0);
}
