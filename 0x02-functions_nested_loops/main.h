#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet - display the alphabet
 *
 * Return: abc...z
 */
int print_alphabet()
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
