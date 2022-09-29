#include "main.h"

/**
 * _pow_recursion - return the power valu of a number
 * @x: integer variable
 * @y: interger variable
 * Return: power value of "x"
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = x;
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	result *= _pow_recursion(x, y - 1);
	return (result);
}
