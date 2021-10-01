#include <stdio.h>
/**
 * main - display all numbers of base 16
 *
 * Return: 0123456789abcdef
 */
int main(void)
{
	char x;
	char i;

	for  (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
