#include <stdio.h>

/**
 * print_left: array from start to end
 * using binary search algorithm
 * @start: array stating point
 * @end: array end point
 * Return: None
 */
int print_left(int start, int end)
{
	int n;

	for (n = start; n <= end ; n++)
	{
		printf("%d", n);
		if (n < end)
			printf(", ");
		if (n == end)
			printf("\n");
	}
	return (0);
}

/**
 * binary_search: that searches for a value in a sorted array of
 * integers  - using the Binary search algorithm
 * @array: pointer to first element of array
 * @size: size of the array
 * @value: element to seaech for
 * Return: index where value was found or -1
 * if value is not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int left, n = 0;
	int size_n = size;
	int right = size_n - 1;
	int mid;

	printf("Searching in array: ");
	for (n = 0; n <= right; n++)
	{
		printf("%d", n);
		if (n < right)
			printf(", ");
		if (n == right)
			printf("\n");
	}
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("mid = %d\n", mid);
		if (array[mid] == value)
			return (mid);
		if (value > array[mid])
		{
			if (mid == size_n - 1)
				break;
			left  = mid + 1;
			printf("Searching in array: ");
			for (n = left; n <= right; n++)
			{
				printf("%d", n);
				if (n < right)
					printf(", ");
				if (n == right)
					printf("\n");
			}
		}
		else
		{
			if (mid == 0)
				break;
			right = mid - 1;
			printf("Searching in array: ");
			for (n = left; n <= right; n++)
			{
				printf("%d", n);
				if (n < right)
					printf(", ");
				if (n == right)
					printf("\n");
			}
		}
	}
	return (-1);
}
