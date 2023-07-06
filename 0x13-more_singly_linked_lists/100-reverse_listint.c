/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}

	*head = prev_node;

	return (*head);
}
