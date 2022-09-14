
#include "main.h"
/**
 * main - master function
 * Description: entry point for other function
 * Return: always 0
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('h');
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	return (0);
}
