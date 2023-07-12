#include <stdio.h>

/**
 * linear_search - that searches for a value in a sorted array
 * integers  - using the Binary search algorithm
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: element to seaech for
 * Return: index where value was found or -1
 * if value is not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (array[n]);
	}
	return (-1);
}
