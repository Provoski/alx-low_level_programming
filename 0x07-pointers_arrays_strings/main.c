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
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n); 
	return (0);
}
