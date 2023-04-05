#include "lists.h"

/**
 * add_node - adds new node at the end of list_t
 * @head: double point to list_t
 * @str: string to be added
 *
 * Return: address of node or NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (*(str + len))
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node  == NULL)
		return (NULL);


	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!head)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next  = new_node;

	return (new_node);
}
