#include "main.h"

/**
 * _isdigit - returns one if digit and zero if not.
 * @c: An input character
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
