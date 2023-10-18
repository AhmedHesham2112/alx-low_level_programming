#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string.
 * @src: second string.
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int i = 0;

	while (src[srclen] != '\0')
		srclen++;
	while (dest[destlen] != '\0')
		destlen++;
	for (i = destlen; i <= (destlen + srclen); i++)
		dest[i] = src[i - destlen];
	return (dest);
}
