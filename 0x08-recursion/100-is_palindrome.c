#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);

if (length <= 1)
return (1);

return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - helper function to check if a string is a palindrome
 * @s: the string to check
 * @start: the starting index of the string
 * @end: the ending index of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
if (s[start] != s[end])
return (0);

if (start >= end)
return (1);

return (check_palindrome(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - finds the length of a string using recursion
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
