#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string given as a parameter.
 * Return: a pointer to the string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc(sizeof(char) * (i + 1));
	if (c == NULL)
	{
		return NULL;
	}
	for (j = 0; j <= i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
