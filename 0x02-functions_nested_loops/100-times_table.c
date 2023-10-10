#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: input number
 * Return: Nothing
 */

void print_times_table(int n)
{
	int i, j, x;

if (n <= 15 && n > 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (x > 10 && x < 100)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else if (x > 100)
			{
				_putchar(x / 100 + '0');
				_putchar(x / 10 % 10 + '0');
				_putchar(x % 10 + '0');
				if (j == n)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
