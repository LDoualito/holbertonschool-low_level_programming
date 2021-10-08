#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_square - display a square using size value
 *@size: number
 * Return: a square sized from size value
 */
void print_square(int size)
{
	int i, j;
	char x = 35;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
