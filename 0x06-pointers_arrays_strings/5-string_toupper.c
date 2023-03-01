#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: String to modify.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
		/* Loop through each character of the string */
{
if (str[i] >= 'a' && str[i] <= 'z')
		/* Check if character is lowercase */
{
str[i] = str[i] - 32;
		/* Convert to uppercase */
}
i++;
}

return (str);
}
