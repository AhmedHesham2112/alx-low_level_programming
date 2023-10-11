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
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 1; i < 49; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i == 48)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
	}
	return (0);
}
