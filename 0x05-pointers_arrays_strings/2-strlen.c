#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;
	while (1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	return (i);
}
