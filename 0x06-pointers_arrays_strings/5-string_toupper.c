#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_toupper - put everything in uppercase
 * @n : string
 * Return: put everything in Uppercase
 */
char *string_toupper(char *n)
{
	int i = 0;
	int j = strlen(n);

	for (i = 0; i < j; i++)
	{
		if ((n[i] >= 97) && (n[i] <= 122))
		{
			n[i] = n[i] - 32;
		}

		else
		continue;
	}
	return (n);
}
