#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: memory area pointed to.
 * @c: the character.
 * Return: a pointer to the memory area s.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
