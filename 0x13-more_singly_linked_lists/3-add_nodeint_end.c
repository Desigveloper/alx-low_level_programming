#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list_t
 * @head: double point to list_t
 * @n: data to be added
 *
 * Return: address of node or NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node;
	list_t *tmp = *head;


	new_node = malloc(sizeof(listint_t));
	if (new_node  == NULL)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next  = new_node;

	return (new_node);
}
