#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 1; i < 97; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i == 96)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
	}
	return (0);
}
