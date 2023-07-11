#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = strlen(s);
int i;

for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
return (0);
}
return (1);
}
