#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocate memory using malloc
 * @b: bytes of memory to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	malloc(b);
	if (malloc(b) == NULL)
	exit(98);
	else
	return (malloc(b));
}
