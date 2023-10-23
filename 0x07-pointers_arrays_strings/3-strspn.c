#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: memory area pointed to.
 * @accept: bytes from s.
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, a = 0, b = 0, c = 0;

	while (accept[i] != '\0')
	{
		i++;
	}
	while (s[j] != '\0')
	{
		j++;
	}
	for (a = 0; a < i; a++)
	{
		for (b = 0; b < j; b++)
		{
			if (accept[a] == s[b])
			{
				if (b > c)
				{
					c = b;
					break;
				}
			}
		}
	}
	if (c == 0)
		return (c);
	else
		return (c + 1);
}
