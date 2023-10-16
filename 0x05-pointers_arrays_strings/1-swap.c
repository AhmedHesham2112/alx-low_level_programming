#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input value 1.
 * @b: input value 2.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
