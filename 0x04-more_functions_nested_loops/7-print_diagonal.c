#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagonal - display a diagonal based on n
 *@n: number
 * Return: diagonal of antislash
 */
void print_diagonal(int n)
{
	int i, j;
	char x = 92;

	if (n <= 0)
	{
		_putchar('\n');
		return;
			}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar(x);
		_putchar('\n');
	}
}
