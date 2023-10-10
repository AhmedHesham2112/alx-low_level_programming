#include "main.h"

/**
 * main - print _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
