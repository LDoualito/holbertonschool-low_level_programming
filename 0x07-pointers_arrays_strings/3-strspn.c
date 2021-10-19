#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strspn - get the lenght of a prefix substring
 * @s : string
 * @accept : string
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
