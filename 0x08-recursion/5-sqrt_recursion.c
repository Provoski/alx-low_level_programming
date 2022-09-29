#include "main.h"

/**
 * _sqrt_recursion - return the square root of interger
 * @n: integer variable
 * Return: square roott of "n"
 */

int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n < 0)
	return (-1);
	if (n == 1)
	return (1);
	return (find_sqrt(n, root));
}
/**
 * find_sqrt - find the square of number
 * @root: integer variable
 * @num: integer variable
 * Return: root
 */
int find_sqrt(int root, int num)
{
	if ((root * root) == num)
	return (root);
	if (root == num / 2)
	return (-1);
	return (find_sqrt(num, root + 1));
}
