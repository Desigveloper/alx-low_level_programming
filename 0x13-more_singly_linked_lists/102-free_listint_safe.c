/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
*/

#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		/* calculates the diff between the address of the */
		 /* current node (*h) and address of the next ((*h)->next)*/
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
