#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
* main - program execution point. it add positive number.
* @argc: argument counter
* @argv: argument array
* Return: always "0" on success
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int counter;

	counter = 0;
	sum = 0;
	if (argc < 2)
	{
		printf("%d", 0);
		printf("\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (**(argv + i) < 48 || **(argv + i) > 57)
			{
				printf("Error");
				printf("\n");
				return(0);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		counter++;
		printf("%d", sum);
		printf("\n");
	}
	return (0);
}
