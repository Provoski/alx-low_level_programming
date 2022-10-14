#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: variable for string to be printed between the string
 * @n: number of strings passed to the functiob
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *strings;
	va_list string_list;

	va_start(string_list, n);
	for (index = 0; index < n; index++)
	{
		strings = va_arg(string_list, char*);
		if (strings == NULL)
			strings = "(nil)";
		printf("%s", strings);
		if (separator != NULL && index < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
