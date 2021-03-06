#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees 2-D array created by alloc_grid
 * @grid: Address of 2-D array to be freed
 * @height: height of grid
 *
 * Return: Nothing, Always void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid);
	}
	free(grid);
}
