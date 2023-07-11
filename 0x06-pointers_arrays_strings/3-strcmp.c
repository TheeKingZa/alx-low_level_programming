#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')		/* Compare s1 and s2 */
i++;
return (s1[i] - s2[i]);
}
