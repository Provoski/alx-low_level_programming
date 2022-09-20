#include "main.h"
#include <string.h>

/**
 * puts2 - prints character of a string
 * @str: variable
 * Return: return string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
