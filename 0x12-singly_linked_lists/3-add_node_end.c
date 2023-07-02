/**
 * add_node_end - adds a node at the end of a singly linked list
 * @head: pointer to a pointer to the head
 * @str: string too be stored
 * Return: the address to the new node
 */

#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;

	/* allocates memory for new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}

/**
 *_strlen - function to compute the length of a string
 *@str: the string
 *Return: the length of a string
 */

size_t _strlen(const char *str)
{
	size_t strlen;

	for (strlen = 0; str[strlen] != '\0'; strlen++)
	{
		;
	}

	return (strlen);
}
