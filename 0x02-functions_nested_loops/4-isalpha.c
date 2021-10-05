#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character
 * Return: 0 if !letter, 1 if letter
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <=122)
		return (1);
	else
		return (0);
}
