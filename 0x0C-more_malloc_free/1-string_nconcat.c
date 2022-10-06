#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a program that concatenate strings
 * @s1: destination string
 * @s2: source string
 * @n: n byte to copy from source to destination.
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s2_lenght;
	unsigned int s1_lenght;
	unsigned int str_lenght;
	unsigned int str_index;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (s1_lenght = 0; s1[s1_lenght]; s1_lenght++)
	{
		;
	}

	for (s2_lenght = 0; s2[s2_lenght]; s2_lenght++)
	{
		;
	}
	str_lenght = s1_lenght + s2_lenght;
	str = malloc(sizeof(*str) * str_lenght);
	if (str == NULL)
	return (NULL);
	for (str_index = 0; s1[str_index]; str_index++)
	str[str_index] = s1[str_index];
	if (n >= s2_lenght)
	{
		for (str_index = 0; s2[str_index]; str_index++)
		str[s1_lenght++] = s2[str_index];
	}
	else
	{
		for (str_index = 0; str_index < n; str_index++)
		str[s1_lenght++] = s2[str_index];
	}
	str[s1_lenght++] = '\0';
	return (str);
}
