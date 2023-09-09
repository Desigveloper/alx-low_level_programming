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
	unsigned long int index;
	hash_node_t *_node;
	int result;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0); /* Invalid parameters */

	index = key_index((const unsigned char *) key, ht->size);
	_node = ht->array[index];

	while (_node != NULL)
	{
		if (strcmp(_node->key, key) == 0)
		{
			/*Key already exists, update the value */
			update_node_value(_node, value);
			return (1); /* Operation succeeded */
		}

		_node = _node->next;
	}

	/* Key does not exist, create a new node */
	result = create_node(ht, key, value, index);
	return (result);
}

/**
* update_node_value - Updates the value of an existing node in the hash table
* @node: Pointer to the node to update
* @value: The new value for the node
*/
void update_node_value(hash_node_t *node, const char *value)
{
	free(node->value);
	node->value = (value != NULL) ? strdup(value) : NULL;
}

/**
* create_node - Creates a new node with the specified key and value
* and adds it to the hash table
* @ht: Pointer to the hash table
* @k: The key for the new node
* @val: The value to the new node
* @ind: The index in the array where the new node should be added
*
* Return: 1 if the operation succeeded, 0 otherwise
*/
int create_node(hash_table_t *ht, char *k, char *val, unsigned long int ind)
{
	hash_node_t *new_node;
	char *key_copy;
	char *value_copy;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0); /* Memory allocation failed */

	key_copy = strdup(k);
	value_copy = (val != NULL) ? strdup(val) : NULL;

	if (key_copy == NULL || (val != NULL && value_copy == NULL))
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
		return (0); /* Memory allocation failed */
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[ind];
	ht->array[ind] = new_node;

	return (1); /* Operation succeeded */
}
