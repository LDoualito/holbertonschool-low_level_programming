#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the last digit to see if it's above 5 or lower than 6
 *
 * Return : Else it's greater than 5 | else lower than 6 | Or 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("Last digit of %d is %d ", n, d);
	if (d > 5)
		printf("and is greater than 5\n");
	else if (d == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
