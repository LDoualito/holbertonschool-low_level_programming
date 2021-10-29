#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array via malloc
 * @nmemb: content
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memo;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(nmemb * size);

	if (memo == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		memo[i] = 0;
	return (memo);
}
