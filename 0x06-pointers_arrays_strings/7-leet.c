#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337.
 * @str: String to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aeotl";
char numbers[] = "43071";

for (i = 0; str[i] != '\0'; i++)
	/* Loop through each character of the string */
{
for (j = 0; letters[j] != '\0'; j++)
			/* Loop through each letter to encode */
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
			/* Check if character matches a letter to encode */
{
str[i] = numbers[j];
			/* Replace character with corresponding number */
}
}
}

return (str);
}
