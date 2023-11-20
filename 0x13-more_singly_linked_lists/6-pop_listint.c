#include "lists.h"

/**
 * pop_listint - A function that frees the list
 * @head: pointer t  head of list
 * Return: none
 */

int pop_listint(listint_t **head)
{
	int new_n;

	if (!head)
		return (0);
	new_n = (*head)->n;
	free(*head);
	return (new_n);
}
