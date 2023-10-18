#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: number of elements in the array.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, x;

	n--;
	for (i = 0; i < n; i++, n--)
	{
		x = a[n];
		a[n] = a[i];
		a[i] = x;
	}
}
