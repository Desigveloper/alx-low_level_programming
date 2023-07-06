/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;

	temp_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);


	new_node->n= n;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp_node == NULL)
		{
			free(new_node);
			return(NULL);
		}
		temp_node = temp_node->next;
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
