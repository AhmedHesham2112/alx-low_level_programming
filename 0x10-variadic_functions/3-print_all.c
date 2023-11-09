#include "variadic_functions.h"

/**
* print_all -  prints anything.
* @format: a list of types of arguments passed to the function.
*
* Return: all the inputs.
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str;
	char j;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		j = format[i];

		if (format[i + 1] != '\0' && (j == 'c' || j == 'i' || j == 'f' || j == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
