#include "lists.h"

/**
 * free_listint2 - A function that frees the list
 * @head: pointer t  head of list
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!*head)
		return;
	node = *head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
