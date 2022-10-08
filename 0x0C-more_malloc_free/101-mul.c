#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - it print multiplication of two argument of integer
 *@argc: number of argument passed
 *@argv: list of argument passed
 *Return: result of multiplication on success or exit with value of 98
 */

int main(int argc, char **argv)
{
	int index;
	int mult;
	int *ptr;

	mult = 1;
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = malloc(sizeof(**argv) * argc);
	if (ptr == NULL)
		return (NULL);
	for (index = 1; index < sizeof(**argv) * argc; index++)
	{
		ptr[index] == argv[index];
		if (!isdigit(*(ptr + index)))
		{
			printf("Error\n");
			exit(98);
		}
		else
			mult *= *(p + index);
	}
	printf("%d\n", mult);
	free(ptr);
	return (0);
}
