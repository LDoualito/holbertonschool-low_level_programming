#include "main.h"
/**
 * print_sign (int n) - check if a number is positive negative or 0
 * @n: number
 * Return: 1 and + if > 0, 0 and 0 if = 0, -1 and - >0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
