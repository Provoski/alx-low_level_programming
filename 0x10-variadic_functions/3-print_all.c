#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	int i;
	int j;
	int z;
	char specifier[] = "cefs";
	int counter;
	int add_seperator;
	int success_count;
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	success_count = 0;
	while (format[i] != '\0')
	{
		counter = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				counter += 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				counter += 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				counter += 1;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				counter += 1;
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
	printf("the function iterated %d\n", i);
	printf("success is %d\n", success_count);
}

void print_all(const char * const format, ...);
int main(void)
		{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
