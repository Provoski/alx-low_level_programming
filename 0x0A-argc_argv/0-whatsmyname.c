#include "main.h"

/**
* main - program execution function. it prints the number of argument
* Return: always 0 on success
* @argc: argument counter
* @argv: argument array
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
