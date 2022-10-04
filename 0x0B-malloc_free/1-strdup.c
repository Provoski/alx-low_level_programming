#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returnd a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string ro duplicate in memory and return
 * when fuvtion is called
 * Return: pointer to the duplicate string
 * or NULL if str == NULL or insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int index;
	unsigned int counter;

	if (str == NULL)
	{
		return (NULL);
	}
	for (counter = 0; str[counter]; counter++)
	{
		counter++;
	}
	duplicate = (char *) malloc(sizeof(char) * (counter + 1));
	if (duplicate == NULL)
	return (NULL);
	for (index = 0; index < counter + 1; index++)
	{
		duplicate[index] = str[index];
	}
	duplicate[index] = '\0';
	return (duplicate);
}
