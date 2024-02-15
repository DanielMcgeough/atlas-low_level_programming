#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid- free a 2d grid
 * @grid: 2d array
 * @height: int height of array
 *
 * Return: return is void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
