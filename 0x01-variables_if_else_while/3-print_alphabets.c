#include <stdio.h>
/**
 * main - Alphbet but first in lowercase then uppercase
 *
 * Return: abc...zABC...Z
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
