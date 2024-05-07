#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                 using the interpolation search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = low + (((double)(high - low) /
						 (array[high] - array[low])) *
						(value - array[low]));

	if (!array || size == 0)
		return (-1);
	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);
	while (pos < size && array[high] != array[low])
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
	}
	return (value == array[low] ? (int)low : -1);
}
