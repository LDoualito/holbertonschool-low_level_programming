#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void print_square(int size)
{
	int i, j;
	char x = 35;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
