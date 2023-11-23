#include "main.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 1, len = strlen(b), j = 0, num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			if (i == len - 1)
				num += 1;
			else
			{
				for (j = 1; j < len - i; j++)
					count = count * 2;
				num += count;
				count = 1;
			}
		}
	}

	return (num);
}
