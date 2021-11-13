#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list_t list
 * @head: pointer to the head of list
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
