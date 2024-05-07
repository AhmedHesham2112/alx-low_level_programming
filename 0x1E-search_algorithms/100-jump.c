#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *                 using the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i = 0, j;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%ld]\n", array[i], i);
		if (array[i] == value)
			return (i);
		if (array[i] < value)
		{
			i += step;
			if (i >= size || array[i] >= value)
			{
				i -= step;
				printf("Value found between indexes [%ld] and [%ld]\n", i, i + step);
				for (j = i; j < size; j++)
				{
					printf("Value checked array[%d] = [%ld]\n", array[j], j);
					if (array[j] == value)
						return (j);
				}
				return (-1);
			}
		}
		if (array[i] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
			for (j = i - 1;; j--)
			{
				printf("Value checked array[%d] = [%ld]\n", array[j], j);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
	}
	return (-1);
}
