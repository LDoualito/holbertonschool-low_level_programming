#include <stdio.h>

int main(void)
{
	char x;

	for(x = 'z' ; x >= 'a' ; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return(0);
}
