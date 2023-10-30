#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of the same char.
 * @size: the size of the array.
 * @c: the character.
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(sizeof(*s) * size);

	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
