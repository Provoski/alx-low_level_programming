#include <stdio.h>

/**
 * main - print the name of the c file it was
 * compiled from
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
