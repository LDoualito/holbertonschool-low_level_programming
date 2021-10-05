#include <stdio.h>
#include <stdlib.h>
/**
 * main - display "_putchar"
 *
 * Return: _purchar
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	putchar(c[i]);

	putchar('\n');
return (0);
}
