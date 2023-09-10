#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table = malloc(sizeof(shash_table_t));

	if (!sh_table)
		return NULL;

	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;
	sh_table->array = calloc(size, sizeof(shash_node_t *));
	if (!sh_table->array)
	{
		free(sh_table);
		return NULL;
	}

	return sh_table;
}

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *sh_node = malloc(sizeof(shash_node_t));

	if (!sh_node)
		return NULL;

	sh_node->key = strdup(key);
	if (!sh_node->key)
	{
		free(sh_node);
		return NULL;
	}

	sh_node->value = strdup(value);
	if (!sh_node->value)
	{
		free(sh_node->key);
		free(sh_node);
		return NULL;
	}

	sh_node->next = NULL;
	sh_node->snext = NULL;
	sh_node->sprev = NULL;

	return sh_node;
}

/**
 * add_to_sorted_list - add a node to the sorted (by key's ASCII) linked list
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp_node;

	if (!table->shead && !table->stail)
	{
		table->shead = table->stail = node;
		return;
	}

	temp_node = table->shead;

	while (temp_node)
	{
		if (strcmp(node->key, temp_node->key) < 0)
		{
			node->snext = temp_node;
			node->sprev = temp_node->sprev;

			if (node->sprev)
				node->sprev->snext = node;
			else
				table->shead = node;

			temp_node->sprev = node;

			return;
		}

		temp_node = temp_node->snext;
	}

	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *sh_node, *temp_node;

	if (!ht || !ht->array || !ht->size ||
	    !key || !strlen(key) || !value)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			new_value = strdup(value);

			if (!new_value)
				return 0;

			free(temp_node->value);
			temp_node->value = new_value;

			return 1;
		}

		temp_node = temp_node->next;
	}

	sh_node = make_shash_node(key, value);

	if (!sh_node)
		return 0;

	sh_node->next = ht->array[index];
	ht->array[index] = sh_node;

	add_to_sorted_list(ht, sh_node);

	return 1;
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp_node;

	if (!ht || !ht->array || !ht->size ||
	    !key || !strlen(key))
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			return temp_node->value;

		temp_node = temp_node->next;
	}

	return NULL;
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char not_last = 0; /* 0 before printing any data, 1 after*/

	if (!ht || !ht->array)
		return;

	printf("{");

	temp_node = ht->shead;

	while (temp_node)
	{
		if (not_last == 1)
			printf(", ");

		printf("'%s': '%s'", temp_node->key, temp_node->value);

		not_last = 1;
		temp_node = temp_node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp_node;
	char not_last = 0; /* 0 before printing any data, 1 after*/

	if (!ht || !ht->array)
		return;

	printf("{");

	temp_node = ht->stail;

	while (temp_node)
	{
		if (not_last == 1)
			printf(", ");

		printf("'%s': '%s'", temp_node->key, temp_node->value);

		not_last = 1;
		temp_node = temp_node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next_node;

	if (!ht || !ht->array || !ht->size)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
