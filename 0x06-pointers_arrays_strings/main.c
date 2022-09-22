#include "main.h"
/**
 * main - program entry point
 * Return: 0 on success;
 */

int main(void)
{
	char str[] =  "hello world";

	char *pstr;


	pstr = cap_string(str);
	printf("%s", pstr);
	printf("%s", str);
	return 0;
}
