#include "hash_tables.h"

/**
 * hash_table_set - Add or update a key/value pair in the hash table.
 *
 * @ht: The hash table to add/update the key/value pair.
 * @key: The key for the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	char *key_copy = strdup(key);
	char *value_copy = (value != NULL) ? strdup(value) : NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0); /* Invalid parameters */

	if (new_node == NULL)
		return (0); /* Memory allocation failed */

	if (key_copy == NULL || (value != NULL && value_copy == NULL))
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
		return (0); /* Memory allocation failed */
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node; /* No collision, add new node to the array */
	}
	else
	{
		/* Collision, add new node at the beginning of the list */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1); /* Operation succeeded */
}
