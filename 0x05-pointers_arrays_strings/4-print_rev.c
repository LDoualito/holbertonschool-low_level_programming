#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *print_rev - reverse a string
 *@s : string
 * Return: reversed string
 */
void print_rev(char *s)
{

	int i;
	int lenght = strlen(s);
	char b;

	for (i = lenght - 1; i >= 0; i--)
	{
		b = s[i];
		_putchar(b);
	}
	_putchar('\n');
}
