#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while ( i < 10)
	{
		while (j < 14)
		{
			_putchar('0' + j);
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}