Projetc 0x13: C - More singly linked lists

0-print_listint.c: A function that takes a pointer to the head node of a linked list as its parameter,
and prints out the value of each node in the list.
It returns the number of nodes in the list

1-listint_len.c: function takes a pointer to the head of a singly linked list of integers (listint_t)
and returns the number of nodes in the list.

2-add_nodeint.c: A function takes a pointer to a pointer to the head of a singly linked list of integers (listint_t) and an integer value n.
Creates a new node with the given value and adds it at the beginning of the list.
Returns the address of the new element if successful,
Or NULL if it fails to allocate memory for the new node.

3-add_nodeint_end.c: A function that takes a pointer to a pointer to the head of a singly linked list of integers
adds a new node at the end of a listint_t list.

4-free_listint.c: A function that takes a pointer to the head of a linked list of integers
and frees all of the memory used by the nodes in the list.
It does this by iterating over the list with a while loop, freeing each node as it goes.

5-free_listint2.c:A function that takes a pointer to a pointer to the head of a linked list of integers.
It frees all of the memory used by the nodes in the list and sets the head pointer to NULL.

6-pop_listint.c: A function takes a pointer to a pointer to the head of a linked list of integers.
It deletes the head node of the list and returns its data. If the list is empty, it returns 0.

8-sum_listint.c: A function that takes a pointer to the head node of a linked list as input
Returns the sum of all the data (n) of the nodes in the list. If the list is empty, it returns 0.

9-insert_nodeint.c: A function that takes a pointer to a pointer to the head node of a linked list, in an index where a new node should be added,
and data to be stored in the new node as input. It returns the address of the new node if it was successfully added, or NULL if it failed 
