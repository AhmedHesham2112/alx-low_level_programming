#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area pointed to.
 * @src: memory area to copy from.
 * @n: number of bytes.
 * Return: a pointer to the memory area s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
		dest[i] = src[j];
		i++;
		j++;
		}
	}
	return (dest);
}
