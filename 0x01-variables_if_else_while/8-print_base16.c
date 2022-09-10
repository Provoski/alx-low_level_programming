#include<stdio.h>
/**
 * main- program execution starts here
 * Descriprion: A program the print hexadecimal numbers
 * Return: 0 (succecc)
 */
int main(void)
{
	int num = 0;
	char cha = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (cha <= 'f')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
