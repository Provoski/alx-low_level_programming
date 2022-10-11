#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - a function that initiallize struct member
 * @d: a struct dog data type
 * @name:name variable
 * @age: age variable
 * @owner: owner variable
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *mem;

	mem = d;	
	if (mem == NULL)
		exit(0);
	else
	{
		mem->name = name;
		mem->age = age;
		mem->owner = owner;
	}
}
