#include <stdio.h>
#include <stdlib.h>
/**
 * _isupper - return 1 if c is uppercase
 *@c: character
 * Return: 1 | 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
