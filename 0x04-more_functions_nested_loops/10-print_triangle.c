#include "main.c"

/**
 * print_triangle - print square on screen
 * @size: varible that determine size of the triagle
 * Return: no return type
 */
void print_triangle(int size)
{
	int i;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (c = 1; c <= i; ++c)
			{
				_putchar('#');
				`
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
