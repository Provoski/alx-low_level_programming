#include "main.h"

/**
 * factorial - return factorial of a positive integer
 * @n: integer variable
 * Retrun: factorial of "n"
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	return (1);
	if (n < 0)
	return (-1);
	return (n * factorial(n - 1));
}
