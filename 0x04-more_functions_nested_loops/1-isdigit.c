#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - display if the character is a digit or no
 *@c: character
 * Return: 1 | 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
