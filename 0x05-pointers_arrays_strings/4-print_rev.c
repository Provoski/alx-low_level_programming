#include "main.h"
#include <string.h>

/**
 * print_rev - reverse string
 * @s: varianle
 * Return: Non
 */

void print_rev(char *s)
{
	int i;
	int lenght;

	lenght = strlen(s);
	for (i = lenght - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	printf("\n");
}
