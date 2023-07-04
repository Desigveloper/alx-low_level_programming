#ifndef LISTS_H
#define LISTS_H

/* standard library header file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*-----------------/ 
 Struct Template
 /-----------------*/
/**
 * struct listNodes - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node struct
 */

typedef struct listNodes
{
	int n;
	struct listNodes *next;
} listint_t;

/* Custom functions prototypes */
size_t print_listint(const listint_t *h);

#endif /* LIST_H */
