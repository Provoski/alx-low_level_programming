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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	return (0);
}
