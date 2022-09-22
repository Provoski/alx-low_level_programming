#include "main.h"

/**
 * cap_string -  convert first letter of a word
 * @str: string variable
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] == 32 && str[n + 1] >= 65 && str[n + 1] <= 90)
		{
			continue;
		}
		else
		str[n] = str[n] + 32;
	}
	return (str);
}
