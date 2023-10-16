#include "main.h"

/**
 * print_rev - prints a reverse string, followed by a new line, to stdout.
 * @s: input value.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	while (1)
	{
		if (i == 0)
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
		i--;
	}
}
