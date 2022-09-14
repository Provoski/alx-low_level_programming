#include "main.h"
/**
 * print_alphabet_x10 - print aphabet in lower case 10 times
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c + 0);
		}
		_putchar('\n');
	}
}
