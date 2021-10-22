#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x : int
 * @y : int
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y % 2 == 0)
		return (_pow_recursion(x * x, y / 2));
	else
		return (x * _pow_recursion(x * x, (y - 1) / 2));
}