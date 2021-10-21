#include "main.h"
#include <stdio.h>

/**
 * ft_sqrt - homemade squareroot
 * @nb : int
 * Return: int
 */

int ft_sqrt(int nb)
{
	int raiz;

	raiz = 0;
	while (raiz * raiz < nb)
	{
		raiz++;
		if (raiz * raiz == nb)
			return (raiz);
		if (raiz * raiz > nb)
			return (0);
	}
	return (0);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n : int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
		return (ft_sqrt(n));
	else if (n % 3 == 0)
		return (ft_sqrt(n));
	else if (n % 4 == 0)
		return (ft_sqrt(n));
	else if (n % 5 == 0)
		return (ft_sqrt(n));
	else if (n % 6 == 0)
		return (ft_sqrt(n));
	else if (n % 7 == 0)
		return (ft_sqrt(n));
	else if (n % 8 == 0)
		return (ft_sqrt(n));
	else if (n % 9 == 0)
		return (ft_sqrt(n));
	else
		return (-1);
	return (0);
}
