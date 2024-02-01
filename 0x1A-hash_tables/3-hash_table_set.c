#include "hash_tables.h"

/**
 * hash_table_set - gives you the index of a key.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: the key
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hn, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL ||
	value == NULL || strlen(key) == 0)
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hn = create_hash_node(key, value);
	if (hn == NULL)
		return (0);
	hn->next = ht->array[index];
	ht->array[index] = hn;
	return (1);
}

/**
 * create_hash_node - creates a hash node.
 * @key: the key
 * @value: is the value associated with the key.
 * Return: the node or null if failed
 */

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
