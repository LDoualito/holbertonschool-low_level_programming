#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - 
 *
 * Return: Always 0.
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
