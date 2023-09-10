#include "hash_tables.h"

/**
* hash_table_print - Prints the keys and values of a hash table
* in the order they appear in the array and linked lists
*
* @ht: Pointer to the hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int not_last = 1;

	if (ht == NULL)
	{
		printf("{}\n"); /* If ht is NULL, print an empty hash table & return */
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (!not_last)
				printf(", ");
			else
				not_last = 0;

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
