#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The string to count the words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0, i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
 * malloc_words - Allocates memory for the words in a string.
 *
 * @str: The string containing the words.
 * @words: The array to store the word pointers.
 *
 * Return: 1 on success, 0 on failure.
 */
int malloc_words(char *str, char **words)
{
int j, k, n;

n = 0;
for (int i = 0; str[i] != '\0'; i++)
{
while (str[n] == ' ')
n++;

for (j = n; str[j] != ' ' && str[j] != '\0'; j++)
;

words[i] = malloc(sizeof(char) * (j - n + 1));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
return (0);
}

for (k = 0; k < (j - n); k++)
words[i][k] = str[n + k];
words[i][k] = '\0';

n = j + 1;
}

return (1);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be split.
 *
 * Return: Pointer to an array of strings (words) or NULL if str is NULL or "".
 */
char **strtow(char *str)
{
char **words;
int len;

if (str == NULL || *str == '\0' || *str == ' ')
return (NULL);

len = count_words(str);
words = malloc(sizeof(char *) * (len + 1));
if (words == NULL)
return (NULL);

if (!malloc_words(str, words))
{
free(words);
return (NULL);
}

words[len] = NULL;

return (words);
}

