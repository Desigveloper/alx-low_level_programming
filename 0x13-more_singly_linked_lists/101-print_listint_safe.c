/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node1, *temp_node2;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	temp_node1 = head;
	temp_node2 = head->next;

	while (temp_node1 != NULL)
	{
		printf("[%p] %d\n", (void *)temp_node1, temp_node1->n);
		count++;

		if (temp_node2 != NULL && temp_node2 <= temp_node1)
		{
			printf("-> [%p] %d\n", (void *)temp_node2, temp_node2->n);
			exit(98);
		}

		temp_node1 = temp_node1->next;

		if (temp_node2 != NULL)
			temp_node2 = temp_node2->next;
	}

	return (count);
}
