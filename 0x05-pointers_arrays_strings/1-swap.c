#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * swap_int - swap the values of two integers
 *@a:integer
 *@b:integer
 * Return: the both integers as been swaped
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
