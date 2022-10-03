#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array of ints
 * @grid: the array
 * @height: number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
