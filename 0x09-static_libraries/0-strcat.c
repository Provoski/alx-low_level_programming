#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate strings
 * @dest: destination variable
 * @src: source variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *con_string;

	con_string = strcat(dest, src);
	return (con_string);
}
