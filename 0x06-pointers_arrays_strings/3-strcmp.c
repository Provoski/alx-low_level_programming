#include "main.h"

/**
 * _strcmp - concatenate strings
 * @s1: variable for first string
 * @s2: variable for second string
 * Return: com_string
 */

int *_strcmp(char *s1, char *s2)
{
	int *com_string;

	com_string = strcmp(s1, s2);
	return (com_string);
}
