#include<stdio.h>
/**
 * main- this is where the program starts
 * Description: program that print decimal number from 0 to 10
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
