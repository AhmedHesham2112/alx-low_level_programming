#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: memory area pointed to.
 * @accept: bytes from s.
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		unsigned int i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (count);
		s++;
		}
	return (count);
}
