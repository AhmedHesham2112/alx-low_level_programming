#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input value.
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
