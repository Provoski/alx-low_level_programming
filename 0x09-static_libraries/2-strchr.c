#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr -  return pointer to the first occurence of a character
 * @s: string variable
 * @c: character variable
 * Return: first occurence of character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
