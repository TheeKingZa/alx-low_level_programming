#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int i, j;
int n = strlen(s);

				/* Iterate over the string from both ends */
for (i = 0, j = n - 1; i < j; i++, j--)
{
				/**
				 * If the characters at any position do not match
				 * &the string is not a palindrome.
				 */
if (s[i] != s[j])
{
return (0);
}
}				/**
				 * If the iteration completes without finding any mismatch
				 * &the string is a palindrome.
				 */
return (1);
}
