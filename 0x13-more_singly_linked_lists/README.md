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

