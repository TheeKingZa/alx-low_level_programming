#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes a character to the standard output(stdout)
 *
 * @c: The character to be written.
 *
 * Return: 0 on success
 */

int _putchar(char c)
	return (putchar(c));
/**
 * print_program_name - Prints the name of the program
 */
void print_program_name(void)
{
char *program_name = __FILE__;
int i = 0;

while (program_name[i] != '\0')
{
	_putchar(program_name[i]);
	i++;
}
_putchar('\n');
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argc;

print_program_name();
(void)argv;

return (0);
}

