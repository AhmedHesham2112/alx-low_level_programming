#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string.
 * @s2: the 2nd string.
 * Return: a pointer to the string, or NULL if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	unsigned int k;
	char *c;

	if (s1 == NULL && s2 == NULL)
	{
		c = malloc(sizeof(char));
		return (c);
	}
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			j++;
		}
	}
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (; (k - i) < j; k++)
	{
		c[k] = s2[k - i];
	}
	c[k] = '\0';
	return (c);
}
