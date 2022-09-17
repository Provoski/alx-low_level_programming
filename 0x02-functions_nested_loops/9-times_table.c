#include <stdio.h>
#include "main.h"
/**
 * times_table - print multiplication table from 0 to 9
 * Return: no return type
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			printf("%d", x * y);
			if (y < 9)
			{
				printf(" ");
				printf(" ");
				printf(",");
			}
		}
		printf("\n");
	}
}
