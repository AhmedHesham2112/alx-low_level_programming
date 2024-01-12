#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the dlistint_t list.
 * Return: None.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next_node;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
}
