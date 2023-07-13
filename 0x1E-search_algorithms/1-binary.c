#include <stdio.h>

/**
 * binary_search - that searches for a value in a sorted array of
 * integers  using the Binary search algorithm
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: element to seaech for
 * Return: index where value was found or -1
 * if value is not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, n, high, mid;

	low = 0;
	high = size - 1;
	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = low + ((high - low) / 2);
		printf("Searching in array: ");
		for (n = low; n <= high; n++)
		{
			printf("%ld", n);
			if (n < high)
				printf(", ");
			if (n == high)
				printf("\n");
		}
		if (value == array[mid])
			return (array[mid]);
		if (value > array[mid])
			low = mid + 1;
		if (value < array[mid])
			high = mid - 1;
	}
	return (-1);
}
