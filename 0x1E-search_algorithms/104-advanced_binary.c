#include "search_algos.h"

/**
 * advanced_binary - searches for the first occurance of a value
 * in a sorted array of integers using the Binary search algorithm.
 *
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (!array || size == 0)
		return (-1);
	if (size == 1 && array[0] == value)
	{
		return (0);
	}
	return (rec_binary(array, left, right, value));
}

/**
 * rec_binary - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int rec_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;
	size_t i;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right + 1; i++)
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);

	if (left == right)
	{
		if (array[mid] == value)
		{
			return (mid);
		}
		return (-1);
	}

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
		{
			return (rec_binary(array, left, mid, value));
		}
		return (mid);
	}
	else if (array[mid] < value)
	{
		return (rec_binary(array, mid + 1, right, value));
	}
	else
	{
		return (rec_binary(array, left, mid, value));
	}
}
