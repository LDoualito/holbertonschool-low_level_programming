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
	int i;
	int j;
	char reversed[8];

	for (i = 8; i <= 0; i--)
	{
		reversed[j] = s[i];
		j++;
	}
	for ( i = 0; i <= 8; i++)
		s[i] = reversed[i];
}
