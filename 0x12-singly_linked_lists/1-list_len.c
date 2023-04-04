#include "lists.h"

/**
 * list_len - returns the number of elements in list_t
 * @h: pointer to list_t
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != 0)
	{
		len++;
		h = h->next;
	}

	return (len);
}
