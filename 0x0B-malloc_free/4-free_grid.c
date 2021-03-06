#include "main.h"
#include <stdlib.h>
/**
 * free_grid - clear the memory of the grid
 * @grid: double pointer
 * @height: height of the grid
 * Return: no
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
