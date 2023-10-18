#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * @n: bytes from src.
 * Return: concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int destlen = 0;
	int i = 0;

	while (src[srclen] != '\0')
		srclen++;
	while (dest[destlen] != '\0')
		destlen++;
	if (n > srclen)
	{
		for (i = destlen; i <= (destlen + srclen); i++)
			dest[i] = src[i - destlen];
	}
	else
	{
		for (i = destlen; i < (destlen + n); i++)
			dest[i] = src[i - destlen];
	}
	return (dest);
}
