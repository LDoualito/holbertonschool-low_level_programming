#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s : research string
 * @accept : researched string
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *len;

	len = strpbrk(s, accept);
	return (len);
}
