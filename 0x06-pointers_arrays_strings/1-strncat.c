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

	con_string = strncat(dest, src, n);
	return (con_string);
}
