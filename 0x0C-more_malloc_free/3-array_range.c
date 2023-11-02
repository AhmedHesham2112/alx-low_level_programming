#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: a pointer to the array, or NULL if it fails.
 */

int *array_range(int min, int max)
{
	int i;
	int *n;

	if (min > max)
		return (NULL);
	n = malloc(sizeof(int) * (max - min + 1));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (max - min); i++)
	{
		n[i] = min + i;
	}
	return (n);
}
