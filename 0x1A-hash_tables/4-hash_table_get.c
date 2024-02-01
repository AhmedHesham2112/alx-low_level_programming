#include "hash_tables.h"

/**
 * hash_table_get - gives you the index of a key.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
