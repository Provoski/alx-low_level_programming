#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters
 * @n: variable for number of parameter
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum;
	va_list list;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
