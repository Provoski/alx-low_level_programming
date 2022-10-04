#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that returnd a pointer to a new string
 * which contain the content of s1 and s2
 * @s1: string one
 * @s2: string two
 * Return: pointer to concantenated  string
 * or NULL if s1 or s2 == NULL, or insufficient memory was available
 */

char *str_concat(char *s1, char *s2)
{
	char *concantenate;
	unsigned int index;
	unsigned int concat_len;
	unsigned int len;

	concat_len = 0;
	len = 0;
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (index = 0; s1[index] && s2[index]; index++)
	{
		len++;
	}
	concantenate = (char *) malloc(sizeof(char) * len);
	if (concantenate == NULL)
	return (NULL);
	for (index = 0; s1[index]; index++)
	{
		concantenate[concat_len++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concantenate[concat_len++] = s2[index];
	}
	concantenate[index] = '\0';
	return (concantenate);
}
