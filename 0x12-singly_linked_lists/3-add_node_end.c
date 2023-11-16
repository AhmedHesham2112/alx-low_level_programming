#include "lists.h"

/**
 * add_node_end - A function that adds a node to the end
 * @head: pointer to head of list
 * @str: the string to be passed to the node
 * Return: number of nodes in list as size_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end = malloc(sizeof(list_t)), *temp = *head;

	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	new_end->len = strlen(str);
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
