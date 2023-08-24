#include "lists.h"

/**
* get_dnode_at_index - Returns the nth node of a doubly linked list
* @head: Pointer to the head of the list
* @index: Index of the node, starting from 0
*
* Return: Pointer to the nth node or NULL if the node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	return (current);
}
