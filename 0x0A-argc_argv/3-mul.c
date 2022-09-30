#include "main.h"
#include <stdlib.h>

/**
* main - program execution point. it multiply two argument.
* @argc: argument counter
* @argv: argument array
* Return: always "0" on success
*/

int main(int argc, char *argv[])
{
	int i;
	int mult;

	mult = 1;
	if (argc != 3)
	{
		printf("Error");
		printf("\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d", mult);
		printf("\n");
	}
	return (0);
}
