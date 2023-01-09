#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert from binary to decimal
 * @b: variable for stringa of binary "0 and 1"
 * Return: decimal value of binary
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int dec;
	int i;

	dec = 0;
	len = strlen(b);
	i = 0;
	if (NULL)
		return (0);
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			dec += (b[i] - '0') * pw(2, len - 1);
			--len;
			i++;
		}
		else
			return (0);
	}
	return (dec);
}

/**
 * pw - calculates the number raise to any power.
 * @num: the value to raise
 * @exp: power to raise to
 * Return: pw;
 */
int pw(int num, int exp)
{
	int i;
	int pw;

	pw = 1;
	if (exp == 0)
		return (1);
	for (i = 0; i < exp; i++)
	{
		pw *= num;
	}
	return (pw);
}
