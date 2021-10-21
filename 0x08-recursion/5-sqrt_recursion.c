#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n : int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
		return(sqrt(n));
	else if (n % 3 == 0)
		return(sqrt(n));
	else if (n % 4 == 0)
		return(sqrt(n));
	else if (n % 5 == 0)
		return(sqrt(n));
        else if (n % 6 == 0)
		return(sqrt(n));
        else if (n % 7 == 0)
		return(sqrt(n));
        else if (n % 8 == 0)
		return(sqrt(n));
        else if (n % 9 == 0)
		return(sqrt(n));
	else
		return (-1);
	return (0);
}
