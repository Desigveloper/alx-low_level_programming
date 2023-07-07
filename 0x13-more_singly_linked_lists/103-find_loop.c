/**
 * find_listint_loop - Finds the node where a loop starts in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts, or NULL
 */

#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr_slow, *ptr_fast;

	if (!head || !head->next)
		return (NULL);

	/* Initialize slow and fast pointers */
	ptr_slow = head->next;
	ptr_fast = head->next->next;

	while (ptr_fast && ptr_fast->next)
	{
		if (ptr_slow == ptr_fast)
		{
			/* Reset slow pointer to beginning of linked list */
			ptr_slow = head;

			/* Move both pointers at same pace until they meet */
			while (ptr_slow != ptr_fast)
			{
				ptr_slow = ptr_slow->next;
				ptr_fast = ptr_fast->next;
			}

			/* Return address of node where loop starts */
			return (ptr_slow);
		}
		/* Move pointers forward */
		ptr_slow = ptr_slow->next;
		ptr_fast = ptr_fast->next->next;
	}

	/* No loop found */
	return (NULL);
}
