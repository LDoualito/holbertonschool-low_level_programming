#include <stdio.h>

int main(void)
{
	char x;
	char i;
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return(0);
}
