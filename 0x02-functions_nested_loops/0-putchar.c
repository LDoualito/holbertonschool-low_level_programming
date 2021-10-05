#include <stdio.h>
#include <stdlib.h>

char c[] = "_putchar";
int i;

int main(void)
{
	for(i = 0; i < 8; i++)
	putchar(c[i]);

	putchar('\n');
return (0);
}
