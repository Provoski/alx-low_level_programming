#include "main.h"
/**
 * leet - encode strings into 1337
 * @s: string variable
 * Return: encoded string
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		s[i] = (4 + '0');
		if (s[i] == 'e' || s[i] == 'E')
		s[i] = (3 + '0');
		if (s[i] == 'o' || s[i] == 'O')
		s[i] = (0 + '0');
		if (s[i] == 't' || s[i] == 'T')
		s[i] = (7 + '0');
		if (s[i] == 'l' || s[i] == 'L')
		s[i] = (1 + '0');
	}
	return (s);
}
