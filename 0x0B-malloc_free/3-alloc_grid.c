#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * Each element of the grid is initialized to 0.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the 2-dimensional array of integers, or NULL if failure.
 * If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Check for invalid width and height */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the grid */
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
/* Allocate memory for each row of the grid */
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory and return NULL if allocation fails */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
/* Set each element of the row to 0 */
for (j = 0; j < width; j++)

grid[i][j] = 0;
}
/* Return the pointer to the grid */
return (grid);
}

