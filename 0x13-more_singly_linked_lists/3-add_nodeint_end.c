#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to head of list
 * @n: the int to be passed to the node
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t)), *temp = *head;

	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_end;
	return (new_end);
}
