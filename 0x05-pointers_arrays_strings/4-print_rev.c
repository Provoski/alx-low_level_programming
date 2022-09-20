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
	int slen;
	char *g;
	g = '\0';

	slen = strlen( s - 1);
	if (s > 0)
	{
		for (i = 0; i < slen; i++)
		{
			g++;
			printf("%c", g);
		}
	}
}
