/**
 * free_listint_safe - Frees a linked list of integers safely
 * @h: Pointer to a pointer to the head of the linked list
 * Return: The number of nodes freed
 */

#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL, *next;

	if (h == NULL || *h == NULL)
		return (num);

	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
			if (*h == list[i])
			{
				free(list), list = NULL, *h = NULL;
				return (num);
			}

		num++;
		list = realloc(list, num * sizeof(*list));
		if (list == NULL)
			exit(98);
		list[num - 1] = *h;

		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list), list = NULL;
	return (num);
}

