#include "main.h"

/**
* main - program execution point. prints the number of argument.
* @argc: argument counter
* @argv: argument array
* Return: always "0" on success
*/

int main(int argc, char *argv[])
{
	int i;
	(void) *argv[argc];

	for (i = 0; i < argc; i++)
	{
		;
	}
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
