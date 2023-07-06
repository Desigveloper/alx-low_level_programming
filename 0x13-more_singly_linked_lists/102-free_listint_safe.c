/**
 * free_listint_safe - Frees a linked list of integers safely
 * @h: Pointer to a pointer to the head of the linked list
 * Return: The number of nodes freed
 */

#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node, *temp_node;

	if (h == NULL)
		return (0);

	current_node = *h;

	while (current_node != NULL)
	{
		count++;

		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);

		if (temp_node <= current_node)
			break;
	}

	*h = NULL;
	return (count);
}
