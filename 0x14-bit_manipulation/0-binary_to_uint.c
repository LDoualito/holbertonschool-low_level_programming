#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned inunsigned int
 * @b : binary string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int count;
	unsigned int coef = 1;
	unsigned length = 0;

	while (b[length] != '\0')
	{
		length++;
	}
	for (count = length - 1; count >= 0; count--)
	{
		if ((b[count] != '0') && (b[count] != '1'))
		    return(0);

		if (b[count] == '1')
		{
			bin += coef;
		}
		coef *= 2;
	}
	return(bin);
}
