#include <stdio.h>
#include "main.h"
/**
 * main - master function
 * Description: entry point for other function
 * Return: always 0
 */

int main(void)
{
	char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);  
	return (0);
}
