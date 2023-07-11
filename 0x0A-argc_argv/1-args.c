#include "main.h"
#include <stdio.h>

/**
 * print_number_of_arguments - Prints the number of arguments
 *				passed to the program
 * @argc: Number of command-line arguments
 */
void print_number_of_arguments(int argc)
{
int count = 0;
int i;

for (i = 0; i < argc; i++)
	count++;

printf("%d\n", count);
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
(void)argv;

print_number_of_arguments(argc);

return (0);
}

