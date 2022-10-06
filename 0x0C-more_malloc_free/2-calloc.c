#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function thats allocate memory for an array
 * using malloc
 * @nmemb: number of arrays
 * @size: number of array element for each array
 * Return: pointer to allocated memort for array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_mem;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	return (NULL);
	arr_mem = malloc(sizeof(arr_mem) * nmemb);
	if (arr_mem == NULL)
	return (NULL);
	for (index = 0; index < nmemb; index++)
	{
		arr_mem[index] = malloc(sizeof(void *) * size);
		if (arr_mem[index] == NULL)
		{
			free(arr_mem[index--]);
		}
		free(arr_mem);
		return (NULL);
	}
	return (arr_mem);
}
