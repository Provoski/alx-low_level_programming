#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it free memory allocated for  dog created
 * @d: the dog variable
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
