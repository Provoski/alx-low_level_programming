#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * Return: last digit of a number
 * @n: variable type
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = n % 10;
		return (x * -1);
	}
	else
	x = n % 10;
	return (x);
}

