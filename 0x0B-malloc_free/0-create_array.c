#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and initialize it with char c
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
	return (NULL);

arr = malloc(sizeof(char) * size);


if (arr == NULL)
	return (NULL);


for (i = 0; i < size; i++)
	arr[i] = c;

return (arr);
}

