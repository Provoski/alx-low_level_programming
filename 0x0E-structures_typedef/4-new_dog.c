#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

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
	int name_len;
	int owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	dog_ptr = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = malloc(sizeof(char) * (name_len + 1));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->name = _strcpy(dog_ptr->name, name);
	dog_ptr->age = age;
	dog_ptr->owner = _strcpy(dog_ptr->owner, owner);
	return (dog_ptr);
}

/**
 * _strlen - it returns the lenght of a string
 * @str: string variable
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int index;
	int lenght;

	lenght = 0;
	for (index = 0; str[index]; index++)
	{
		lenght += 1;
	}
	return (lenght);
}

/**
 * _strcpy - it copy character string from source to detination
 * @src: variable for source
 * @dest: variable for destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}
	dest[index++] = '\0';
	return (dest);
}
