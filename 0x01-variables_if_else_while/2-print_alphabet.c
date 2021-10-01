#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: abc...z
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
