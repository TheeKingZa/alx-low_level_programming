#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated_str;
int s1_len = 0, s2_len = 0, i, j;

/* Handle empty strings */
if (s1 == NULL)

s1 = "";
if (s2 == NULL)

s2 = "";

/* Compute the lengths of the two strings */
while (s1[s1_len] != '\0')

s1_len++;

while (s2[s2_len] != '\0')

s2_len++;

/* Allocate memory for the concatenated string */
concatenated_str = malloc((s1_len + s2_len + 1) * sizeof(char));
if (concatenated_str == NULL)

return (NULL);

/* Copy the contents of s1 into the concatenated string */
for (i = 0; i < s1_len; i++)
concatenated_str[i] = s1[i];
/* Copy the contents of s2 into the concatenated string */
for (j = 0; j < s2_len; j++)
concatenated_str[i + j] = s2[j];

/* Add null terminator to the end of the concatenated string */
concatenated_str[i + j] = '\0';

return (concatenated_str);
}

