#include <stdio.h>
/**
 * main - print alphabets without "e" and "q"
 *
 * Return: abcdf...Z
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'e') || (c == 'q'))
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
