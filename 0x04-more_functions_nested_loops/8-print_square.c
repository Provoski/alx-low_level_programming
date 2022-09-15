#include "main.c"

/**
 * print_square - print square on screen
 * @size: varible that determine size of the line
 * Return: no return type
 */
void print_square(int size)
{
	int i;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
