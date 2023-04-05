#include "lists.h"

/**
 * free_listint2 - frees a linked list in listint_t
 * @head: pointer to the list to be freed
 *Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while(*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
