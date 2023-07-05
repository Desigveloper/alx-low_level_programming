/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */

#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	while (current_node != NULL)
	{
		if (count == index)
			return current_node;

		current_node = current_node->next;
		count++;
	}

	return (NULL);
}
