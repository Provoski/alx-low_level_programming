#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print multiplication table from 0 to to n mumber
 * @n: variable
 * Return: multipliation of n number
 */
void print_times_table(int n)
{
	int x;
	int y;

	if (n > 15 || n < 0)
	{
		printf(" ");
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				printf("%d", x * y);
				if (y < n)
				{
					printf(",");
				}
				printf("  ");
			}
			printf("\n");
		}
	}
	printf("\n");

}
