#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - display all digit
 *
 *Return: nothing void
 */
void print_numbers(void)
{
	int i = '0';

	while(i <= 9)
	{
		if (i == 2)
			i++;
		else if (i == 4)
			i++;
		else
		{
		_putchar(i);
		i++;
		}
	}
	_putchar('\n');
}
