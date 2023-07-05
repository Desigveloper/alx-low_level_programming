/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */

#include "lists.h"

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_node;

	if (*head == NULL)
		return (0);

	temp_node = *head;
	data = temp_node->n;
	*head = (*head)->next;
	free(temp_node);

	return (data);
}
