#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the string.
 * @src: input text.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
		char *s = dest;

	while (*src)
		*dest++ = *src++;
	return (s);
}
