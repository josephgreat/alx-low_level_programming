#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory
 * @grid: 2d array
 * @height: height of the array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
