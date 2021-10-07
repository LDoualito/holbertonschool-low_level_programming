#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_most_numbers - display all digit except 2 and 4
 *
 *Return: nothing void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
