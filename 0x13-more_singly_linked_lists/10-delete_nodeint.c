/**
 * delete_nodeint_at_index - Deletes a node at a given position in a list.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	temp_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;

		if (temp_node == NULL)
			return (-1);
	}

	prev_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
