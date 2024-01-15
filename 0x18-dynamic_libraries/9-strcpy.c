#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the string.
 * @src: input text.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
