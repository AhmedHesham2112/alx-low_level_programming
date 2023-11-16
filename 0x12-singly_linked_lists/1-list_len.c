#include "lists.h"

/**
 * list_len - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned long int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
