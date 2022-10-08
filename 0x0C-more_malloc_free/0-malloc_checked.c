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
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	exit(98);
	return (mem);
}
