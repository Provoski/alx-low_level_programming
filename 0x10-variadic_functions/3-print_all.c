#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything
 * @format: print format variable
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int index;
	int int_val;
	float float_val;
	char char_val;
	char *string_val;
	char format_array[4] = {'c', 's', 'f' , 'i'};
	int len;
	va_list format_list;

	index = 0;
	len = strlen(format);
	va_start(format_list, format);
	while (index < len)
	{
		switch (*format)
		{
			case 'c':
				char_val = va_arg(format_list, char);
				printf("%c", char_val);
				break;
			case 'i':
				int_val = va_arg(format_list, int);
				printf("%d", int_val);
				break;
			case 'f':
				float_val = va_arg(format_list, float);
				printf("%f", float_val);
				break;
			case 'f':
		}
	}
	va_end(format_list);
}
