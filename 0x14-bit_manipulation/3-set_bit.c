#include <stdio.h>
#include "main.h"
#include <stdlib.h>

int vallen3(int n);
/**
 * set_bit - set the value of a bit at given index to 1
 * @n: variable for integer
 * @index: index of "n" to set it bit
 * Return: 1 on succsess or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;
	unsigned int len;

	len = vallen3(*n);
	if (index > (len - 1))
		return (-1);
	bit = 1 << index;
	if (!bit)
		return (-1);
	*n |= bit;
	if (!*n)
		return (-1);
	return (1);
}
/**
 * vallen3 - counts how nany times a number can be divided by 2
 * @n: integer variable
 * Return: count
 */
int vallen3(int n)
{
	int div;
	int count;

	count = 0;
	div = 1;
	while (div <= n)
	{
		div *= 2;
		count++;
	}
	return (count);
}
