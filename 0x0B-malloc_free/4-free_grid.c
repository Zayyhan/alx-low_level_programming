#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 *
 * @grid: grid to be freed
 * @height: the number of rows in the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	j = 0;
	while (j < height)
	{
		free(grid[j]);
		j++;
	}

	free(grid);


	return;
}
