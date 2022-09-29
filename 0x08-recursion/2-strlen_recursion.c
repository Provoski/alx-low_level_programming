#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string
 * @s: string variable
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;
	if (*s)
	{
		counter++;
		counter += _strlen_recursion(s + 1);
	}
	return (counter);
}
