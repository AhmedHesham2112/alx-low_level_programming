#include "lists.h"

/**
 * delete_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to head of list
 * @index: the desired node
 * Return: number of nodes in list as size_t
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2 = NULL;
	unsigned int i = 0;

	if (!temp || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && temp; i++)
	{
		if (i == (index - 1))
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
