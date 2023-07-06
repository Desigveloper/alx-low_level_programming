/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list or 98 if program fails.
 */

#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node;
	size_t count = 0;


	while (head)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		temp_node = head;
		head = head->next;

		if (temp_node <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (count);
}
