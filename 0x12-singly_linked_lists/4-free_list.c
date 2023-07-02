/**
 * free_list - iterates over a list freeing each node and its associated string
 * @head: pointer to the list of the list
 * Return: nothing
 */

#include "lists.h"

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;

		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
	free(head);
}
