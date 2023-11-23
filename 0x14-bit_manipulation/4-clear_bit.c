#include <stdio.h>
#include "main.h"

/**
 * clear_bit -sets the value of a bit to 0 at a given index.
 * @n: the intger.
 * @index: the index.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	i <<= index;
	i = ~i;
	*n &= i;
	return (1);
}
