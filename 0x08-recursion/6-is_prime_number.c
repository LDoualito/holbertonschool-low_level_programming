#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	int i = n;

	if (i == 1)
		return (1);
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (1);
	}
}
