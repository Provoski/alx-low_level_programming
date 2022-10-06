#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocate memory using malloc
 * @b: bytes of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if (b <= INT_MAX)
	{
		malloc(b);
		if (malloc(b) == NULL)
		return (NULL);
		return (malloc(b));
	}
	else
	{
		exit(98);
	}
}
