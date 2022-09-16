#include "main.h"
#include <stdio.h>
/**
 * print_number - print integers only
 * @n: variable int
 * Return: integers
 */
void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('\n');
	}
	x /= 10;
	if (x != 0)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');

}
