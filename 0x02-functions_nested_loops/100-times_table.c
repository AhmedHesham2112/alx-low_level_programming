#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n - insert number
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i;
	int j;
	int x;
if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
