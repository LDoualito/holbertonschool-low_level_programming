#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - print array
 *@a : element
 *@n number of element
 * Return: printed array with , 
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 2; i++)
	{
		if (n <= 0)
			printf("\n");

		printf("%d, ", a[i]);

	}
	printf("%d\n", a[i]);

}
