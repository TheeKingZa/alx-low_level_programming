#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string whose length is to be calculated.
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
			/* Base case: If the current character is null, return 0. */
if (*s == '\0')
return (0);

			/**
			* Recursive call: Add 1 to the length returned
			* by the function when called on the
			* next character in the string.
			*/
return (1 + _strlen_recursion(s + 1));
}
