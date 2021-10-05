#include "main.h"
/**
 * _islower - check if a letter is in lowercase
 *
 * Return: 0 if uppercase, 1 if lowercase
 */
int _islower(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);
}
