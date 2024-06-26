#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, i = 0;
	int right = size - 1;
	int mid = left + (right - left) / 2;

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
