#include "main.h"
#include <string.h>

/**
 * _memset - fill the first n byte of memory
 * pointed to by "s" with constant byte "b"
 * @s: variable for memory pointer
 * @b: constant byte
 * @n: variable for number of bytes to be filled
 * Return: pointer to memory area "s"
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
