#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *                 using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: the number of elements in list
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i = 0, j;
}
