#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * rev-string - reverse a string
 * @s : string
 * Return: Reversed string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	int j;
	char reversed[100];

	for (i = len - 1; i <= 0; i--)
	{
		reversed[j] = s[i];
		j++;
	}
	for ( i = 0; i <= len; i++)
		s[i] = reversed[i];
}
