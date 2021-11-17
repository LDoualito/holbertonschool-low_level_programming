#include "lists.h"

/**
 * add_nodeint - adds a new node at the head of list_t
 * @head: pointer to the adress of the head of the list
 * @n : element to add
 * Return: adress of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}