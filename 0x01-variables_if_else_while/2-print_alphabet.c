#include<stdio.h>
/**
 * main- this is where the program starts
 * Description: program that print alphabet in small letters
 * Return: 0 (success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
