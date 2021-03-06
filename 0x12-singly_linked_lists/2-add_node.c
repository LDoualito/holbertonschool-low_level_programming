#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add new node at the head of list_t list
 * @head: pointer to the head
 * @str: string to add at the head of the list
 * Return: the adress of the new element and NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
