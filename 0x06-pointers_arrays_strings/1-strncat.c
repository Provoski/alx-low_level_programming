#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: destination variable
 * @src: source variable
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *con_string;
	int lenght;

	lenght = strlen(src);
	if (*src == '\0' || n == lenght || n > lenght)
	{
		return (src);
	}
	else
	con_string = strncat(dest, src, n);
	return (con_string);
}
