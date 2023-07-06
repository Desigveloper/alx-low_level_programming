/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current_node, *next_node;

	if (h == NULL)
		return (0);

	current_node = *h;
	*h = NULL;

	while (current_node != NULL)
	{
		size++;
		next_node = current_node->next;
		free(current_node);

		if (next_node >= current_node)
			break;
		current_node = next_node;
	}

	return (size);
}

