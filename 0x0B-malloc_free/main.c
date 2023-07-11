#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
/* Test create_array function */
unsigned int size = 10;
char c = 'A';
char *arr = create_array(size, c);
if (arr == NULL)
{
	printf("Failed to create array using create_array function.\n");
	return (1);
}
printf("Created array: %s\n", arr);
free(arr);

	/* Test alloc_grid function */
int width = 3;
int height = 4;
int **grid = alloc_grid(width, height);
if (grid == NULL)
{
	printf("Failed to allocate grid using alloc_grid function.\n");
	return (1);
}
printf("Allocated grid:\n");
for (int i = 0; i < height; i++)
{
	for (int j = 0; j < width; j++)
		printf("%d ", grid[i][j]);
	printf("\n");
}
	/* Free memory for grid */
for (int i = 0; i < height; i++)
free(grid[i]);
free(grid);

	/* Test str_concat function */
char *s1 = "Hello";
char *s2 = "World!";
char *concatenated = str_concat(s1, s2);

if (concatenated == NULL)
{
	printf("Failed to concatenate strings using str_concat function.\n");
	return (1);
}
printf("Concatenated string: %s\n", concatenated);
free(concatenated);

return (0);
}
