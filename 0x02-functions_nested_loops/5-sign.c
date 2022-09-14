#include "main.h"
/**
 * print_sign - tell the sign of number
 * @n: the digit ti check their sign
 * Return: 0 if successful
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else
	{
		_putchar('-');
	}
	return (0);
}
