#include "variadic_functions.h"

/**
 * print_strings - prints stringss, followed by a new line.
 * @separator: the the string to be printed between numbers
 * @n: number of strings passed to the function
 * Return: the sum of all the numbers.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i + 1 != n)
			printf("%s%s", va_arg(args, char *), separator);
		else
			printf("%s", va_arg(args, char *));
	}
	va_end(args);
	printf("\n");
}
