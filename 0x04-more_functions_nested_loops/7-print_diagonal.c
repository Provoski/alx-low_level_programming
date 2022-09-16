#include "main.h"

/**
 * print_diagonal - print diagonal line on screen
 * @n: varible that determine lenght of the line
 * Return: no return type
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
