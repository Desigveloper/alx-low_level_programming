Project 0x12: C - Singly linked lists

0-print_list.c: A function that takes a pointer to the head of a singly linked list as its argument
and prints out each element of the list using a while loop.
If the str member of a node is NULL, it prints out [%d] (nil), where %d is the length of the string;
otherwise, it prints out [%d] %s\n, where %d is the length of the string and %s is the string itself.
It then returns the number of nodes in the list.

1-list_len.c: A function that takes a pointer to the head of a singly linked list as its argument
and counts the number of nodes in the list using a while loop.
It then returns it once all nodes have been counted.

2-add_node.c: A function that adds a new node at the beginning of a singly linked list.
The function takes a pointer to a pointer to the head of the list (head) and a string (str) as arguments.
The string is duplicated and stored in the new node. Finally, returns the address of the new node.
