#include <stdlib.h>

/**
 * int_index - a function that search for integer from array element
 * @array: array variable
 * @size: size of array
 * @cmp: pointer to a function
 * Return: index of first element found
 * or -1 if size <= 0 or no element of array match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int temp;
	int flag;

	temp = 0;
	if (array == NULL || cmp == NULL)
		return;
	flag = 0;
	if (size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
	{
		temp = array[index];
		if (cmp(temp))
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return (index);
	else
		return (-1);
}
