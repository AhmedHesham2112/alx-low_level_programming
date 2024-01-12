#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @h: the dlistint_t list.
 * @idx: the index of the node, starting from 0.
 * @n: node value
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!h)
		return (NULL);
	node = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	new_node->n = n;
	new_node->next = node->next;
	new_node->prev = node;
	node->next = new_node;
	return (new_node);
}
