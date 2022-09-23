#include "main.h"
/**
 * main - program entry point
 * Return: 0 on success;
 */

int main(void)
{
	char str[] =  "hello world man only leave once \n";

	char *pstr;


	pstr = leet(str);
	printf("%s", pstr);
	printf("%s", str);
	return 0;
}
