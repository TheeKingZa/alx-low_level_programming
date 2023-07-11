#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int is_digit(char *str);
char *multiply(char *num1, char *num2);

/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int is_digit(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')

return (0);

}
return (1);

}

/**
 * multiply - Multiplies two numbers represented as strings
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The product of the two numbers as a dynamically allocated string
 */

char *multiply(char *num1, char *num2)
{
int len1, len2, i, j, k, carry;

int *result;

char *mul;

len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
k = i + j + 1;
result[k] += (num1[i] - '0') * (num2[j] - '0');
}
}

carry = 0;

for (k = len1 + len2 - 1; k >= 0; k--)
{
result[k] += carry;
carry = result[k] / 10;
result[k] %= 10;

}

k = 0;

while (k < len1 + len2 && result[k] == 0)
	k++;

if (k == len1 + len2)
return (strdup("0"));


	mul = malloc((len1 + len2 - k + 1) * sizeof(char));

if (mul == NULL)

	return (NULL);

for (i = k, j = 0; i < len1 + len2; i++, j++)

mul[j] = result[i] + '0';

mul[j] = '\0';



free(result);



return (mul);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 98 on error
 */

int main(int argc, char **argv)
{
char *num1, *num2, *result;


if (argc != 3)

{

printf("Error\n");
return (98);
}


num1 = argv[1];
num2 = argv[2];


if (!is_digit(num1) || !is_digit(num2))
{
	printf("Error\n");
	return (98);
}

result = multiply(num1, num2);
if (result == NULL)
{
	printf("Error\n");
	return (98);
}

printf("%s\n", result);
free(result);

return (0);
}
