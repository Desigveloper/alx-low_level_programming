#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->n);
		free(head);
		head = tmp;
	}
}
