#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - display the alphabet in lowercase
 *
 * Return: abc...z
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++){
		putchar(letter);
	}
	putchar('\n');
	return;
}
