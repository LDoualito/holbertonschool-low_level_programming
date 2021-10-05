#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet_x10 - display 10 times the alphabet in lowercase
 *
 *Return: abc...z
 *abc...z
 *...
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		letter = 'a';
	}
}
