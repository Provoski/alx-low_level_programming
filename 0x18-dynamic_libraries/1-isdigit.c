#include "main.h"

/**
 * _isdigit - check if a number is a digit
 * @c: variable of type int
 * Return: 1 if digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
