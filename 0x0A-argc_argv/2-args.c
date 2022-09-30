#include "main.h"

/**
* main - program execution point. prints names of arguments including file.
* @argc: argument counter
* @argv: argument array
* Return: always "0" on success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
