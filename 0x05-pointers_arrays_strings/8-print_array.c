#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array.
 * @n: input number.
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
		{
			printf("%d\n", a[i]);
			continue;
		}
		printf("%d, ", a[i]);
	}
}
