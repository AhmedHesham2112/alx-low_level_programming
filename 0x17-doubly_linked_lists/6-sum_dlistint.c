#include "lists.h"

/**
 * sum_dlistint - returns the number of elements in a linked dlistint_t list.
 * @head: the dlistint_t list.
 * Return: the number of elements.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *temp;

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
