#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *print_rev - reverse a string
 *@s : string
 * Return: reversed string
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		putchar(a[i]);
	}
}
