#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min :min
 * @max :max
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array, size;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min + 1);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
