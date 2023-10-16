#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input value.
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (j < (i / 2))
		{
			j++;
			continue;
		}
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
