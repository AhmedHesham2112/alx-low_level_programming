#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the dlistint_t list.
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	if (!new_end)
	{
		free(new_end);
		return (NULL);
	}
	new_end->n = n;
	new_end->next = NULL;
	new_end->prev = NULL;

	if (!head || !(*head))
	{
		*head = new_end;
		return (new_end);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_end;
	new_end->prev = temp;
	return (new_end);
}
