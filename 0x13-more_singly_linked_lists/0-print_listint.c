/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head node of the list.
 *
 * Return: number of nodes in the list.
 */

#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t nodesCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesCount++;
	}

	return (nodesCount);
}

