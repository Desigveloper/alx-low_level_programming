/**
 * add_node - adds a new node at the beginning of a singly linked list
 * @str: a pointer to str to be stored in node
 * @head: a pointer to a pointer to the head of list
 * Return: address of the new element
 */
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

       /* allocates memory for new node */
	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


/**
 *_strlen - function to compute the length of a string
 *@str: the string
 *
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
