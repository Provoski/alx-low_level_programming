#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - return a pointer to a two dimension of array
 * @height: array number of row
 * @width: array number of element per row
 * Return: NULL on failure or if width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **grid_alloc;
	int width_index;
	int height_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid_alloc = (int **) malloc(sizeof(int *) * height);
	if (grid_alloc == NULL)
	{
		return (NULL);
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		grid_alloc[height_index] = (int *) malloc(sizeof(int) * width);
		if (grid_alloc[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
			{
				free(grid_alloc[height_index]);
			}
			free(grid_alloc);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
		grid_alloc[height_index][width_index] = 0;
	}
	return (grid_alloc);
}
