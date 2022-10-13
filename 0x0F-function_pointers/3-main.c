#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - code checker
 * @argc: argument counter
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;
	int val1;
	int val2;
	char *op;
	char array_op[6] = {'+', '-', '*', '/', '%'};

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	op = argv[2];
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op != array_op)
	{
		printf("Error\n");
		exit(99);
	}
	if (val2 == 0 && *op == '%' || *op == '/')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(val1, val2));
	return (0);
}
