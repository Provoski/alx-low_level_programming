#include "main.h"
#include <string.h>

/**
 * rev_string - print rever of a string
 * @s: variable
 * Return: string reverse
 */

void rev_string(char *s)
{
	int x;
	int y;
	char z;

	x = strlen(s) - 1;
	y = 0;
	while (x > y)
	{
		z = s[x];
		s[x] = s[y];
		s[y] = z;
		x--;
		y++;
	}
}
