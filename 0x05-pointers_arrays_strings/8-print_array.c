#include "main.h"
/**
 * print_array - print array element
 * @a: array variable
 * @n: size variable
 * Return: array element
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a++);
		if (i < n-1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
