#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - return the number of bytes in the initial segment of
 *  "s" which consist only of bytes from "accept"
 *  @s: string variable
 *  @accept: variable that determine bytes from accept
 * Return: only byte from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
