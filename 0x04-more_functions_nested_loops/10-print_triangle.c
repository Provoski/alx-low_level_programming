#include "main.h"

/**
 * print_triangle - print triangle on screen
 * @size: varible that determine size of the triagle
 * Return: no return type
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar('#');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
}
