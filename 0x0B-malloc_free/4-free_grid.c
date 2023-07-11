#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: 2D grid to be freed
 * @height: height dimension of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid
 * previously created by the alloc_grid function.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}

free(grid);
}
