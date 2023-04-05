#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of listnt_t
 * @head: double point to listint_t
 * @n: data to add the node
 *
 * Return: address of node or NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
