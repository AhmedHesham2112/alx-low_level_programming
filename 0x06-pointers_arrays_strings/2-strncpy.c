#include "main.h"

/**
 * _strncpy - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: bytes from src.
 * Return: concatenated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
