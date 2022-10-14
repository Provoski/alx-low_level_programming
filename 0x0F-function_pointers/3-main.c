#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - code checker
 * @argc: argument counter
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int val1;
	int val2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	if ()
	{
		if ((**(argv + 2) == 37  && val2 == 0) || (val2 == 0 && **(argv + 2) == 47))
		{
			printf("Error\n");
			exit(100);
		}
		else
		{
			printf("%d\n", 9 + 10);
		}
	}
	
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
