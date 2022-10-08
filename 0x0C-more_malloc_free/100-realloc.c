#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * _realloc - reallocate memory to another size specified
 * @ptr: memory to reallocate
 * @old_size: old allocatef memory size
 * @new_size: new allocated memory size
 * Return: pointer to new allocated memory or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	else
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		memcpy(newptr, ptr, old_size);
		free(ptr);
		return (newptr);
	}
}
