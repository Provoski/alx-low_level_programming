#include <stdio.h>

/**
 * main - code checker
 * @argc: argument counter
 * @argv: argument list
 * Return: 0 on success
 */
int main(int argc; char **argv)
{
	int result;
	int val1;
	int val2;
	char *op;
	char array_op[6] = "+%/-*";

	val1 = argv[1];
	val2 = argv[3];
	op = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (op != array_op)
	{
		printf("Error\n");
		exit(99);
	}
	if (val2 == 0 && op == % || op == /)
	{
		printf("Error\n");
		exit(100);
	}
	return (0);
}
