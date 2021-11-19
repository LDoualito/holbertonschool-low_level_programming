#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *@n : pointer
 *@index : change bit of the number
 * Return: 1 or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
