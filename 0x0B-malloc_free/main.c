#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program testing and execution function
 * Return: always 0
 */
int main(void)
{
	char *s;

	s = str_concat("ALX SE ", "IN MAKING");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
