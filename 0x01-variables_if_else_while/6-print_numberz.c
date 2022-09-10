#include<stdio.h>
/**
 * main- this is where the program starts
 * Description: program that print single digit number of base 10
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
