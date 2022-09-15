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

	if (n > 0)
	{
		while (x < n)
		{
			while (y < n)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
