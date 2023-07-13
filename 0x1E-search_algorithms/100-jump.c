#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - find minum value betweet two number
 * @a: first value
 * @b: second value
 * Return: minimum value
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searching using jump search algorithm
 * @array: pointer to first element of an array
 * @size: size of the array
 * @value: value to search
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, prev;
	int size_n = size;

	prev = 0;
	jump = sqrt(size_n);
	while (array[min(jump, size_n) - 1] < value)
	{
		printf("Value checked array[%d]\n", prev);
		prev = jump;
		jump += sqrt(size_n);
		if (prev >= size_n)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, jump);
	while (array[prev] < value)
	{
		printf("Value checked array\n");
		prev++;
		if (prev == min(jump, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
