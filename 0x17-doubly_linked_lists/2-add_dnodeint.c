#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the dlistint_t list.
 * @n: the value of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));
	dlistint_t *temp = NULL;

	if (!new_head)
	{
		free(new_head);
		return (NULL);
	}
	new_head->n = n;
	new_head->next = NULL;
	new_head->prev = NULL;

	if (!head || !(*head))
	{
		*head = new_head;
		return (new_head);
	}

	temp = *head;
	temp->prev = new_head;
	*head = new_head;
	new_head->next = temp;
	return (new_head);
}
