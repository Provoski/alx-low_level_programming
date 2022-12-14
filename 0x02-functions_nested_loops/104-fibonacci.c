#include "main.h"
#include <stdio.h>
#include <inttypes.h>
/**
 * main - fib0nnaci of first 98 numbers
 * Return: 0on success
 */

int main(void)
{
	long int immediate_no = 1;
	long int previous_no = 0;
	long int sum_of_immediate_and_previous_no = 0;
	int counter;

	for (counter = 0; counter < 98; counter++)
	{
		sum_of_immediate_and_previous_no = immediate_no + previous_no;
		previous_no = immediate_no;
		immediate_no = sum_of_immediate_and_previous_no;
		printf("%lu", sum_of_immediate_and_previous_no);
		if (counter < 97)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
