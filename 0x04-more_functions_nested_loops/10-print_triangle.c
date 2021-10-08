#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
void print_triangle(int size)
{
	int i, j, x;
	int space, triangle;

	space = size - 1;
	triangle = size - space;

	if (size <= 0)
		_putchar('\n');
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < space; j++)
			_putchar(' ');
		for (x = 0; x < triangle; x++)
			_putchar('#');
		space--;
		triangle++;
		_putchar('\n');
	}
}
