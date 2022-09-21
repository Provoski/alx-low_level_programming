#include "main.h"

/**
 * _strncpy - copy specified part of src to dest
 * @dest: destination variable
 * @src: source variable
 * @n: interger variavle
 * Return: str_copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str_copy;

	str_copy = strncpy(dest, src, n);
	return (str_copy);
}
