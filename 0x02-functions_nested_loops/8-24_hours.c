#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print s every minutes of the day including seconds
 * Return: no return type
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d < 10; d++)
				{
					printf("%d%d:%d%d", a, b, c, d);
					printf("\n");
				}
			}
		}
	}
	printf("\n");
}
