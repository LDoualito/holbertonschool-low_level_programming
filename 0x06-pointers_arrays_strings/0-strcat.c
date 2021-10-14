#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_strcat(char *dest, char *src) - concatenates two strings
 * @dest: string
 * @src : string
 * Return: concatened strings
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
