#include <stdio.h>
#include "main.h"

/**
 * set_bit -sets the value of a bit to 1 at a given index.
 * @n: the intger.
 * @index: the index.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	i <<= index;
	*n |= i;
	return (1);
}
