#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: String to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')			/* Loop through each character of the string */
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')	/* Check if character is lowercase */
{
str[i] = str[i] - 32;			/* Convert to uppercase */
}
}
i++;
}

return (str);
}
