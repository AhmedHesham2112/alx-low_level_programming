#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int counter = 1, len = strlen(b), num = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			num += counter;
		counter *= 2;
		len--;
	}

	return (num);
}
