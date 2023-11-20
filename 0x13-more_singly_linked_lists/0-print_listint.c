#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the first element
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	listint_t *new_h = malloc(sizeof(listint_t));
	listint_t *new_next = malloc(sizeof(listint_t));
	int i = 0;

	new_h->n = h->n;
	new_h->next = h->next;
	while (new_h->next != NULL)
	{
		printf("%d\n", new_h->n);
		new_next = new_h->next;
		new_h->n = new_next->n;
		new_h->next = new_next->next;
		i++;
	}
	printf("%d\n", new_h->n);
	return (i + 1);
}