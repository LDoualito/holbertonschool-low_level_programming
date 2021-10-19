#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strstr - locate the first occurence of the substring
 * @haystack : string
 * @needle : substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *where;

	where = strstr(haystack, needle);
	return (where);
}
