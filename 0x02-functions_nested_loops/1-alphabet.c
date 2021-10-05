#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - print alphabet
 *
 * Return: abc...c
 */
void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
