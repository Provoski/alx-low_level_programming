#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int vallen1(unsigned long int n);
/**
 * print_binary - print binary equivalent of decimal number
 * @n: decimal value variable
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int len;
	unsigned long int temp;

	len = vallen1(n);
	temp = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (len > 0)
	{
		temp = 1 << (len - 1);
		if ((temp & n) >= 1)
			_putchar('1');
		else
			_putchar('0');
		--len;
	}
}

/**
 * vallen1 - counts how nany times a number can be divided by 2
 * @n: integer variable
 * Return: count
 */
int vallen1(unsigned long int n)
{
	unsigned long int div;
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
