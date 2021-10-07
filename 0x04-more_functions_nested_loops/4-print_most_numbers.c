#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - display all digit
 *
 *Return: nothing void
 */
void print_most_numbers(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
