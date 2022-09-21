#include "main.h"
#include <string.h>
#include <limits.h>
#include <stdlib.h>

/**
 * _atoi - convert a strings to integers
 * @s: variable
 * Return: ineger equivalent of string
 */

int _atoi(char *s)
{
	int str_to_int;

	str_to_int = atoi(s);
	return (str_to_int);
}
