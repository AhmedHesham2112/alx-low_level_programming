#include "lists.h"

/**
 * pop_listint - A function that frees the list
 * @head: pointer t  head of list
 * Return: none
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new_n;

	if (!head || !*head)
		return (0);
	new_n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (new_n);
}
