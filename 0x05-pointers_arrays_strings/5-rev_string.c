#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int i = 0; /* Initialize loop counter */
int j = 0; /* Initialize loop counter */
char temp; /* Initialize temporary variable for swapping characters */

/* Loop through each character in the string to get the length */
while (s[j] != '\0')
{
j++;
}

j--; /* Decrement j to point to the last character in the string */

/* Loop through the string swapping characters until the middle is reached */
while (i < j)
{
temp = s[i]; /* Store the character at index i in temp */
s[i] = s[j]; /* Copy the character at index j to index i */
s[j] = temp; /* Copy the character at index i (stored in temp) to index j */
i++; /* Increment i to move to the next character */
j--; /* Decrement j to move to the previous character */
}
}
