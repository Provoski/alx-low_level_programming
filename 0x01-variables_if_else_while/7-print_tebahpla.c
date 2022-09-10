#include<stdio.h>
/**
 * main- this is where the program starts
 * Description: program that print alphabet in small letters in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
