#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcmp - compare 2 strings together
 * @s1 : string
 * @s2 : string
 * Return: -15 | 15 or 0
 */
int _strcmp(char *s1, char *s2)
{

	if (strcmp(s1, s2) < 0)
		return (-15);
	else if (strcmp(s1, s2) > 0)
		return (15);
	else
		return (0);
}
