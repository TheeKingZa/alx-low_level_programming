#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to the standard output.
 *
 * @str: String to be printed.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
