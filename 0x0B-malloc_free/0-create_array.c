#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that create an array of char
 * and initialize it with a specific character
 * @size: size of array
 * @c: character to initialize array with
 * Return: a pointer to the array
 * or Null if size = 0 or if memory fails to allocate.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	if (size == 0)
	return (NULL);
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	return (arr);
}
