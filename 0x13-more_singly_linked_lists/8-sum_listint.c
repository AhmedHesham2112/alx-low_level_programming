#include "lists.h"

/**
 * sum_listint - prints all the elements of a listint_t list.
 * @head: the first element
 * Return: number of nodes.
 */

int sum_listint(listint_t *head)
{
	size_t i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
