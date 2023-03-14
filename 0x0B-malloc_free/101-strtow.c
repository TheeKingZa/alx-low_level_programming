#include "main.h"
#include <stdlib.h>
/**
* strtow - Splits a string into words.
*
* @str: The string to be splitted.
*
* Return: Pointer to an array of strings (words) or NULL if str is NULL or ""
*/
char **strtow(char *str)
{
char **words;
int i, j, k, n, len;

if (str == NULL || *str == '\0') /* check if str is NULL or "" */
return (NULL);

len = 0;
for (i = 0; str[i] != '\0'; i++) /* count number of words in str */
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
len++;
}
words = malloc(sizeof(char *) * (len + 1));
/* allocate memory for words array */
if (words == NULL) /* check if malloc fails */
return (NULL);
n = 0;
for (i = 0; i < len; i++)
{
while (str[n] == ' ') /* skip spaces */
n++;
for (j = n; str[j] != ' '; j++) /* count length of word */
;
words[i] = malloc(sizeof(char) * (j - n + 1)); /* allocate memory for word */
if (words[i] == NULL) /* check if malloc fails */
{
for (k = 0; k < i; k++) /* free previous words */
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; k < (j - n); k++) /* copy word */
words[i][k] = str[n + k];
words[i][k] = '\0'; /* null-terminate word */
n = j + 1;
}
words[i] = NULL; /* set last element to NULL */
return (words);
}
