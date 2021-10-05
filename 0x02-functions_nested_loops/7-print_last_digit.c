#include "main.h"
/**
 * print_last_digit - display the last digit of a number
 * @j: number
 * Return: the last digit of the input number
 */

int print_last_digit(int j)
{
	j = j % 10;
	_putchar('0' + j);
	return (j);
}
