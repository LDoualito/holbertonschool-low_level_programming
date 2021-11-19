#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n : input number
 * @index: index to return
 * Return: -1 fail else the value of index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
