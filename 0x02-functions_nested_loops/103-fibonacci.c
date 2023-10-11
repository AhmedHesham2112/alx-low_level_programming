#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int sum;
	long int evens = 2;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (b % 2 == 0 && b < 4000000)
			evens += b;
	}
	printf("%ld\n", evens);
	return (0);
}
