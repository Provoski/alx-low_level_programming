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
	unsigned int s1_index;
	unsigned int s2_index;

	concat_len = 0;
	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	for (s1_index = 0; s1[s1_index]; s1_index++)
	{
		;
	}
	for (s2_index = 0; s1[s1_index]; s1_index++)
	{
		;
	} concat_len = s1_index + s2_index;
	concantenate = (char *) malloc(sizeof(char) * concat_len + 7);
	if (concantenate == NULL)
	return (NULL);
	for (index = 0; s1[index]; index++)
	{
		concantenate[index] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concantenate[s1_index++] = s2[index];
	}
	concantenate[s1_index] = '\0';
	return (concantenate);
}
