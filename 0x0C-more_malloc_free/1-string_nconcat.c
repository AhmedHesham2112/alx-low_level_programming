#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *strcon2(char *s1, char *s2, unsigned int n);
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to concat.
 * Return: a pointer to the array, or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *c;

	if (s1 == NULL)
		return (NULL);
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
	if (j > n)
	{
		c = malloc(sizeof(char) * (i + n + 1));
		if (c == NULL)
		{
			return (NULL);
		}
		for (k = 0; k < i; k++)
		{
			c[k] = s1[k];
		}
		for (; (k - i) < n; k++)
		{
			c[k] = s2[k - i];
		}
		c[k] = '\0';
		return (c);
	}
	else
		return (strcon2(s1, s2, j));
}

/**
 * strcon2 - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: less that j in the function before it.
 * Return: a pointer to the array, or NULL if it fails.
 */

char *strcon2(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k = 0;
	char *c;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
	}
	c = malloc(sizeof(char) * (i + n + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (; (k - i) < n; k++)
	{
		c[k] = s2[k - i];
	}
	c[k] = '\0';
	return (c);
}
