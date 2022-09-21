#include "main.h"

/**
 * main - master function
 * Description: entry point for other function
 * Return: always 0
 */

int main(void)
{
	char s1[98];
	char *ptr;
	ptr = _strcpy(s1, "what a great world\n");
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}
