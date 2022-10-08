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
	unsigned int s1_lenght;
	unsigned int s2_lenght;
	unsigned int str_lenght;
	unsigned int index;

	str_lenght = n;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (s1_lenght = 0; s1[s1_lenght]; s1_lenght++)
	{
		str_lenght++;
	}
	for (s2_lenght = 0; s2[s2_lenght]; s2_lenght++)
	{
		;
	}
	str = malloc(sizeof(*str) * str_lenght);
	if (str == NULL)
	return (NULL);
	str_lenght = 0;
	for (index = 0; s1[index]; index++)
	str[str_lenght++] = s1[index];
	if (n >= s2_lenght)
	{
		for (index = 0; s2[index]; index++)
		str[str_lenght++] = s2[index];
	}
	else
	{
		for (index = 0; index < n; index++)
		str[str_lenght++] = s2[index];
	}
	str[str_lenght++] = '\0';
	return (str);
}
