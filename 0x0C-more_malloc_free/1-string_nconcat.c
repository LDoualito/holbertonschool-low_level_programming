#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenatino between two strings
 * @s1: string
 * @s2: string
 * @n : number of bytes of the second strings we wil copy
 * Return: concatened string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sc;
	unsigned int leng = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		leng++;

	sc = malloc(sizeof(char) * (leng + 1));

	if (sc == NULL)
		return (NULL);
	leng = 0;

	for (i = 0; s1[i]; i++)
		sc[leng++] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
	{
		sc[leng++] = s2[i];
	}
	sc[leng++] = '\0';
	return (sc);
}
