#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int last_bit_n = n, last_bit_m = m;

	while (n > 0 || m > 0)
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
