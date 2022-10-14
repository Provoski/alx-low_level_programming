#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers passeds a seperator, followed by a new line
 * @separator: variable for numbers seperators
 * @n: variable for n numbers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	int numbers;
	va_list num_list;

	va_start(num_list, n);
	for (index = 0; index < n; index++)
	{
		numbers = va_arg(num_list, int);
		printf("%d", numbers);
		if (separator != NULL && index < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num_list);
}
