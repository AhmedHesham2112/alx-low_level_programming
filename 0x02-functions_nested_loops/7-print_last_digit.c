#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: An input character
 * Return: +n.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);
	else
		a = n % 10;

	_putchar(a + '0');
	return (a);
}
