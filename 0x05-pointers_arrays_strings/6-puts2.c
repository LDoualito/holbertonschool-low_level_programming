#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *puts2 - display only pair case of str array
 *@str: array
 * Return: pair
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
