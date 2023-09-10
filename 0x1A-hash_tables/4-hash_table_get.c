#include "hash_tables.h"

/**
* hash_table_get - Retrieves the value associated with a key in the hash table
* @ht: Pointer to the hash table to search in
* @key: The key to look for
*
* Returns: The value associated with the key, or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL); /* Invalid parameters */

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value); /* Key found, return the value */
		node = node->next;
	}
	return (NULL); /* Key not found */
}
