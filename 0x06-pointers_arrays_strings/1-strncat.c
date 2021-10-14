#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strncat - concatened strings based on the n value
 * @dest : string
 * @src : string
 * @n : int
 * Return : concatened string within the n range
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest , src, n);
	return (dest);
}
