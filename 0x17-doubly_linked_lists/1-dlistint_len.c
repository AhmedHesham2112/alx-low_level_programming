#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the dlistint_t list.
 * Return: the number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
