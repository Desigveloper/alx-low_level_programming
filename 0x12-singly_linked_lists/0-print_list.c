#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer to list_t
 * Return: list or [0] (nil) if NULL
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h != 0)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		l++;
	}

	return (l);
}
