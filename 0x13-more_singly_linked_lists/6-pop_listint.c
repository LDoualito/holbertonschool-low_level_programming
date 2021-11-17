#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head : pointer to pointer to head of the list
 * Return: the head node content
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int content;

	if (*head == NULL)
		return (0);

	tmp = *head;
	content = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (content);
}
