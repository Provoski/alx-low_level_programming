#include<stdio.h>
/**
 * main- program execution starts here
 * Description: program that prints single digit including comma and space
 * Return: 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
