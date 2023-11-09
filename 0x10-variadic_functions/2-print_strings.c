#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: all the strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
