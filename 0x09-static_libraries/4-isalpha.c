#include "main.h"

/**
 * _isalpha - returns one if alphabet and zero if not.
 * @c: An input character
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
