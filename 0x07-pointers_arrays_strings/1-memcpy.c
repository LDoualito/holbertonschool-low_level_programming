#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest : memory area output
 * @src : memory area input
 * @n : bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (0);
}
