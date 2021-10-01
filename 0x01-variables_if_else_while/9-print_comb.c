#include <stdio.h>
/**
 * main - display numberwith space and ,
 *
 * Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
int main(void)
{
	int x = 0;

	for (x = 0 ; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
	putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
