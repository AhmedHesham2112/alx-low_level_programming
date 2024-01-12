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
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		temp = *h;
		i = 1;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = temp->next;
						new_node->prev = temp;
						temp->next->prev = new_node;
						temp->next = new_node;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (new_node);
}
