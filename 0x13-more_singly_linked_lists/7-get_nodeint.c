#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of list
 * @index: the starting node
 * Return: number of nodes in list as size_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
