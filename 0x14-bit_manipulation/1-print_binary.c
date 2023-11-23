#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
}
