#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
int i = 0;

while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}
printf("%d\n", sum);

return (0);
}
