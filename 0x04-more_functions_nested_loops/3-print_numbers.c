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
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
