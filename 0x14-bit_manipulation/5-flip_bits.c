#include <stdio.h>
#include "main.h"

/**
 * flip_bits -returns number of bits to flip to get from a number to another
 * @n: the first intger.
 * @m: the second intger.
 * Return: number of bits to flip to get from a number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, i = 1;
	unsigned int flipped = 0;

	while (i <= n)
	{
		if (i & xor)
			flipped++;
		i <<= 1;
	}
	return (flipped);
}
