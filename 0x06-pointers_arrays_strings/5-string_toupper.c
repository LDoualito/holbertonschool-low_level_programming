#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
char *string_toupper(char *n)
{
	int i;
	int j = strlen(n);
	
	for (i = 0; i < j; i++)
	{
		n[i] = n[i - 32];
	}
	return (n);
}
