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
	unsigned int k, l;
	char *c;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0' && s1 != NULL)
	{
		i++;
	}
	while (s2[j] != '\0' && s2 != NULL)
	{
		j++;
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
	for (l = 0; l < j; k++)
	{
		c[k + l] = s2[l];
	}
	c[k + l] = '\0';
	return (c);
}
