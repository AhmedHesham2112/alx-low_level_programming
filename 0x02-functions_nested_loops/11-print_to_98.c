#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98, followed by a new line.
 * @n: input number
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
}
