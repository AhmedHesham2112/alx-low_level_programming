#include "lists.h"

/**
 * add_node - A function that adds a node
 * @head: pointer to head of list
 * @str: the string to be passed to the node
 * Return: number of nodes in list as size_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = strlen(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
