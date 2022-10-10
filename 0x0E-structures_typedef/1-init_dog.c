#include <stdio.h>
#include "main.h"

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
	d -> name = name;
	d -> age = age;
	d - owner = owner;
}
