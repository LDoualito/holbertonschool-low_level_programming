#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		while (h)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);

			count++;
			h = h->next;
		}
	}
	return (count);
}
