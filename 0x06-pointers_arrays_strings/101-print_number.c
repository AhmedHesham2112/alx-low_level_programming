#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */

void print_number(int n)
{
	int divisor = 1;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	temp = n;
	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor != 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
