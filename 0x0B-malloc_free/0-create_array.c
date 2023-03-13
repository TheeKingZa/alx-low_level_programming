#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * and initializes it with a specific char.
 *
 * @size: the size of the array to create.
 * @c: the character to initialize the array with.
 *
 * Return: On success, returns a pointer to the created array.
 *         On failure, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
char *array;

/* Check for zero size */
if (size == 0)
{
return (NULL);
}
/* Allocate memory for the array */
array = (char *) malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL); /* Allocation failed */
}

/* Initialize the array with the specified character */
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
