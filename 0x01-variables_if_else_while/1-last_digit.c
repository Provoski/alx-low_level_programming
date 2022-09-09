#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- this is where program execution starts
 * Description: this program test if a random value is negative
 * or positice
 * Return: 0 (successful)
 */

int main(void)
{
	int n;
	int lastNo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNo = n % 10;
	if (lastNo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNo);
	}
	else if (lastNo < 6 && lastNo != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNo);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastNo);
	}
	return (0);
}
