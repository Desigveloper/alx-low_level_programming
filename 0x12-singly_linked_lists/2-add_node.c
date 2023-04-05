#include "lists.h"

/**
 * add_node - adds new node at the beginning of list_t
 * @head: double point to list_t
 * @str: string to be added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	unsigned int len = 0;

	while (*(str + len))
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
