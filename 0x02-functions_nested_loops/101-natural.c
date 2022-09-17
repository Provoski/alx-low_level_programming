#include "main.h"
#include <stdio.h>

/**
 * main - natural number summation of multiple of 3 and 5
 * Return: 0 0n success
 */

int main(void)
{
	int i;
	int sum_of_multiples = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 != 0) || (i % 5 != 0))
		{
			continue;
		}
		sum_of_multiples += i;
	}
	printf("%d", sum_of_multiples);
	printf("\n");

	return (0);
}
