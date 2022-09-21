#include "main.h"
#include <string.h>

/**
 * puts_half - devide a word into half and print the other part
 * @str: variable
 * Return: return nothing
 */

void puts_half(char *str)
{
	int i;
	int lenght;

	lenght = strlen(str);
	if (lenght % 2 == 0)
	{
		for (i = lenght / 2; i < lenght; i++)
		putchar(str[i]);
	}
	else
	{
		for (i = lenght / 2 + 1; i < lenght; i++)
		putchar(str[i]);
	}
	putchar('\n');
}
