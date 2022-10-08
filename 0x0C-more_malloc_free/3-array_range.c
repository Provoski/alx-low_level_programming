#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimal values
 * @max: maximul value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *mem;
	int arr;

	if (min > max)
	return (NULL);
	mem = malloc(sizeof(int) * (max - min + 1));
	if (mem == NULL)
	return (NULL);
	for (arr = 0; min <= max; arr++)
	{
		mem[arr] = min;
		min++;
	}
	return (mem);
}
