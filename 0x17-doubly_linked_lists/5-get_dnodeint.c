#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the dlistint_t list.
 * @index: the index of the node, starting from 0.
 * Return:  the nth node, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!head)
		return (NULL);
	node = head;
	for (i = 0; i < index; i++)
	{
		if (node->next == NULL)
			return (NULL);
		node = node->next;
	}
	return (node);
}
