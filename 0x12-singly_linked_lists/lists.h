#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct s_list - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct s_list
{
	char *str;
	int len;
	struct s_list *next;
} list_t;


int _putchar(void);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t _strlen(const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
