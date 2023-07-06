/**
 * sum_listint - Returns the sum of all the data (n) of a list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The sum of the data of all nodes in the list.
 */

#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
