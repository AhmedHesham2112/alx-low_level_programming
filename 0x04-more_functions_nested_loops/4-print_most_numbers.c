#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4.
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
