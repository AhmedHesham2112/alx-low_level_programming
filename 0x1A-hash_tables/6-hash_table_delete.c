#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 * Return: None.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *current, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
