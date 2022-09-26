#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - locate first occurence in the steing of any byte in the string
 * @s: string variable
 * @accept: string variable
 * Return: first occurence of string
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
