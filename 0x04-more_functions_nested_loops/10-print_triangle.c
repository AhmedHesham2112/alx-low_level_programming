#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal.
 * @size: input number.
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (j = size - i; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
