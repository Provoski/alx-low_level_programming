#include "main.h"

/**
 * main - program entry point
 * Return: 0 on success;
 */

int main(void)
{
	char s1[98] = "hello";
	char s2[] = "world!";
	char s3[10] = " melody";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strncat(s1,s2,3);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s3, 4);
	printf("%s\n", ptr);
	return (0);
}
