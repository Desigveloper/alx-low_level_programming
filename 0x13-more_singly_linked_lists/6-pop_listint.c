#include "lists.h"

/**
 * pop_listint - deletes or pop  node from a linked list
 * @head: node to be deleted
 *Return: node or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (node);
}
