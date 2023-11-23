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
	unsigned long int xor = n ^ m;
	unsigned int counter = 0;

	while (xor)
	{
		counter++;
		xor &= (xor - 1);
	}
	return (counter);
}
