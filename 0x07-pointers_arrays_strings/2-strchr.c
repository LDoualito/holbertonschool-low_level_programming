#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s : string
 * @c : the character we are looking for
 * Return: char
 */

char *_strchr(char *s, char c)
{
	char *find = strchr(s, c);

	return (find);
}
