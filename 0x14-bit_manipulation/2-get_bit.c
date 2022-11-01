#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int vallen2(int n);
/**
 * get_bit - get a bit from specified index
 * @n: inter values
 * @index: index to return the binary value from "n"
 * Return: binary in "index" on success
 * or -1 if error occure;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int len;

	len = vallen2(n);
	bit = n >> index;
	if (index > (len - 1))
		return (-1);
	if ((bit & 1) >= 1)
		return (1);
	else
		return (0);
}
/**
 * vallen2 - counts how nany times a number can be divided by 2
 * @n: integer variable
 * Return: count
 */
int vallen2(int n)
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
