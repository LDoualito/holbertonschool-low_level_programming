#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size
 * @cmp : function comparing
 * Return: the first element from the cmp
 * function never return 0
 * or -1 if no element is possible if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
