#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - executes a function given as a parameter on
 * each element of an array.
 * @array: name of the array.
 * @size: size of the array.
 * @cmp: a pointer to the function you need to use
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
