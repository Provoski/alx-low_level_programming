#include "main.h"
#include <stdio.h>

/**
 * main - fibinnaci of first 50 numbers
 * Return: 0on success
 */

int main(void)
{
	long int immediate_no = 1;
	long int previous_no = 0;
	long int sum_of_immediate_and_previous_no = 0;
	long int counter;

	for (counter = 0; counter < 50; counter++)
	{
		sum_of_immediate_and_previous_no = immediate_no + previous_no;
		previous_no = immediate_no;
		immediate_no = sum_of_immediate_and_previous_no;
		printf("%ld", sum_of_immediate_and_previous_no);
		if (counter < 49)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
