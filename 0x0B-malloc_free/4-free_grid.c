#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created the alloc_grid function.
 * @grid: a pointer to the 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
