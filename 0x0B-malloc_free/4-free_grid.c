#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid previousely created in previous function
 * @grid: grid to free
 * @height: height of the dimention
 */
void free_grid(int **grid, int height)
{
	int u;

	if (grid == NULL || height == 0)
		return;

	for (u = 0; u < height; u++)
		free(grid[u]);

	free(grid);
}
