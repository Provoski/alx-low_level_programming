#include <stdio.h>
#include "main.h"

int vallen4(int n);
/**
 * clear_bit - set value at a given index to 0
 * @n: interger value to clear it bit at given index
 * @index: given index of n to clear
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int len;

	len = vallen4(*n);
	if (index > (len - 1))
		return (-1);
	*n &= (~(1 << index));
	if (*n)
		return (1);
	else
		return (-1);
}
/**
 * vallen4 - counts how nany times a number can be divided by 2
 * @n: integer variable
 * Return: count
 */
int vallen4(int n)
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

