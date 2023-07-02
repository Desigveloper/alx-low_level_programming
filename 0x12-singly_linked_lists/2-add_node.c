/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @str: a pointer to str to be stored in node
 * @head: a pointer to a pointer to the head of list
 * Return: address of the new element
 */
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
