/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * Return: void
 */

#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
