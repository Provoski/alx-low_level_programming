#include "main.h"

/**
 * print_diagonal - print diagonal line on screen
 * @n: varible that determine lenght of the line
 * Return: no return type
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\' + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
