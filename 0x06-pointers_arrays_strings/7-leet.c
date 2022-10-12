#include "main.h"
/**
 * leet - encode strings into 1337
 * @s: string variable
 * Return: encoded string
 */
char *leet(char *s)
{
	char strchk1[6] = {'a', 'e', 'o', 't', 'l'};
	char strchk2[6] = {'A', 'E', 'O', 'T', 'L'};
	int replacer[6] = {'4', '3', '0', '7', '1'};
	int i;
	int x;

	for (i = 0; s[i]; i++)
	{
		for (x = 0; strchk1[x] && strchk2[x] && replacer[x]; x++)
		{
			if (s[i] == strchk1[x] || s[i] == strchk2[x])
			{
				s[i] = replacer[x];
			}
		}
	}
	return (s);
}
