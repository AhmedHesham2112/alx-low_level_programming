#include "main.h"

/**
 * _islower - returns one if lower case and zero if not.
 * @c: An input character
 * Return: 1 or 0.
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
