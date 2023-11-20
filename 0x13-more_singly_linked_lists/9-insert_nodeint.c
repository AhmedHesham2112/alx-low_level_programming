#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to head of list
 * @idx: the desired node
 * @n: value of n;
 * Return: number of nodes in list as size_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!temp || !new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = 0;
	if (idx == 0)
	{
		new_node->next = *head;
		(*head)->next = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	return (NULL);
}
