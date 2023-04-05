#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head != 0)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
