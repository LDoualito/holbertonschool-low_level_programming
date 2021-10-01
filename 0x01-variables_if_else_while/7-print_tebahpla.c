#include <stdio.h>

/**
 * main - alphabet in lowercase in reverse
 *
 * Return: z...cba
 */
int main(void)
{
	char x;

	for (x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
