/**
 * free_listint - Frees a linked list of integers.
 *
 * @head: A pointer to the head of the linked list.
 * Return: void
 */

#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
