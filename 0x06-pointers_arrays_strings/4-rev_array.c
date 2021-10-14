#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverse a string
 *@a : string
 *@n : lenght of array
 * Return: reversed array of integers
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		j--;
	}
}
