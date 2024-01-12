#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head: the dlistint_t list.
 * @index: the index of the node, starting from 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int i = 0;

	temp = *head;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				new_node->next = temp->next;
				if (temp->next != NULL)
				{
					temp->next->prev = new_node;
				}
			}
			free(temp);
			return (1);
		}
		new_node = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
