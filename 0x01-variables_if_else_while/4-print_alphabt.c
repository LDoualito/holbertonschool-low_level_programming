#include <stdio.h>
/*more header stuff*/

/*betty style goes brrrr*/
int main (void)
{
	char c;

	for(c = 'a' ; c <= 'z' ; c++)
	{
		if (( c == 'e') || (c == 'q'))
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
