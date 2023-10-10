#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: An input character
 * Return: +n.
 */

int print_last_digit(int n)
{
	int a = n % 10;

	_putchar(a);
	return (a);
}
