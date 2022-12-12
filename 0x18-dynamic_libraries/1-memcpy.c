#include "main.h"
#include <string.h>

/**
 * _memcpy - fill the first n byte of memory
 * pointed to by "s" with constant byte "b"
 * @dest: variable for destination
 * @src: variable for source
 * @n: variable for number of bytes to be filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
