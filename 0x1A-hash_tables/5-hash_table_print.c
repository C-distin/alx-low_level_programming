#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * 
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
