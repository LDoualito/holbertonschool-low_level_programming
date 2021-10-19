#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s : input string
 * @b : is a constant
 * @n : bytes
 * Return : char
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
