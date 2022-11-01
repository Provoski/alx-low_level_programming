#include <stdio.h>
#include "main.h"

/**
 * flip_bits - gives the number of bit that need to
 * be flip im one intefer to get the other integer
 * @n: first integer variable
 * @m: second integer variable
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	int last_bit_n;
	int last_bit_m;

	last_bit_n = 0;
	last_bit_m = 0;
	count = 0;
	while (n || m)
	{
		last_bit_n = n & 1;
		last_bit_m = m & 1;
		if (last_bit_n != last_bit_m)
		count++;
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}

