#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc -  a function that allocate memory using
 * of specific size using malloc
 * @nmemb: bytes of memory to allocate
 * @size: size of data type
 * Return: pointer to allocated memory, or NULL on Error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;
	unsigned int index;

	index = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	while (mem[index])
	{
		mem[index] = 0;
		index++;
	}
	return (mem);
}
