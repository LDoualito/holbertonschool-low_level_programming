#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s : input string
 * @b : is a constant
 * @n : bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s,b,n);
	return (0);
}
