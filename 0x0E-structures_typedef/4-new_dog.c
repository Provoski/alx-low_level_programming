#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - it creates anew dog
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 * Return: Nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	dog_ptr = malloc(sizeof(dog_ptr));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = name;
	dog_ptr->age = age;
	dog_ptr->owner = owner;
	return (dog_ptr);
}
