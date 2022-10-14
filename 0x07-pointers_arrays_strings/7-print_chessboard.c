#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the arrangement of a cheesboard
 * @a: array variable
 * Return: cheesboard
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	for (i = 0; a[i][7]; i++)
	{
		for (x = 0; x < 8; x++)
		printf("%c", a[i][x]);
		printf("\n");
	}
}
