#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that free memory space allocated for a
 * two dimensional array
 * @grid: array row memory size
 * @height: array column memory size
 * Return: Non
 */

void free_grid(int **grid, int height)
{
	int row_index;

	for (row_index = 0; row_index < height; row_index++)
	{
		free(grid[row_index]);
	}
	free(grid);
}
