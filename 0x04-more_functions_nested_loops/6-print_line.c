#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_line - display n '_'
 *@n: numbers
 * Return: n '_'
 */
void print_line(int n)
{
	int i;

	for (i = 0; i > n; i++)
		continue;
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
