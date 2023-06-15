/**
 * free_grid - frees a 2 dimensional grid
 * created by previous function (alloc_grid)
 *
 * @grid: grid to free the previous
 * @height: height of grid
 *
 * Return: void
 */

#include "main.h"

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;

	while (i < height)
	{
		free(*(grid + i));
		i++;
	}

	free(grid);
}

