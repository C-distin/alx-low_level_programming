#include "hash_tables.h"

/**
 * hash_table_set - set a value in a hash table
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 *
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *current;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	current = ht->array[index];
	if (!current)
	{
		ht->array[index] = new_node;
		return (1);
	}

	while (current->next)
		current = current->next;
	current->next = new_node;

	return (1);
}
