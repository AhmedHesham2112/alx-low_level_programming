#include "variadic_functions.h"

/**
 * sum_them_all - sums all numbers.
 * @n: the first number to sum.
 *
 * Return: the sum of all the numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		result += value;
	}

	va_end(args);
	return (result);
}
