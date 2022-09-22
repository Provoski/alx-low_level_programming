#include "main.h"

/**
 * reverse_array - reverse the content of an array elements
 * @a: array variable
 * @n: array size variable
 * Return: reverse array element
 */

void reverse_array(int *a, int n)
{
	int i;
	int count;

	count = 0;
	for (i = (n - 1); i >= 0; i--)
	{
		printf("%d", a[i]);
		count++;
		if (count < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
