#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: 0 for success
 */
void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while ( x <= 9)
	{
		while ( y <= 14)
		{
			if (y > 9)
			{
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			y++;
			}
		}
	_putchar('\n');
	x++;
	y = 0;
	}
}
