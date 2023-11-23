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
	unsigned int i = 0, len = 0, num = 0;

	if (b == NULL || b[0] == '\0')
		return (0);
	while (b[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = (num << 1) + (b[i] - '0');
	}

	return (num);
}
