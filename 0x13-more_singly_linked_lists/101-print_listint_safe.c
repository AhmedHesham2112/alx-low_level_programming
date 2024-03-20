#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: the first element
 * Return: number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (!head)
		exit(98);
	while (head)
	{
		printf("[%p]%d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
