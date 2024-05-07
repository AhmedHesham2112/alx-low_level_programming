#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                 using the exponential search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array || size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	for (i = 1; i < size; i = i * 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			return (binary_for_expo(array, i / 2, i, value));
		}
	}
	return (binary_for_expo(array, i / 2, size - 1, value));
}

/**
 * binary_for_expo - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int binary_for_expo(int *array, size_t left, size_t right, int value)
{
	size_t mid = left + (right - left) / 2;
	size_t i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
