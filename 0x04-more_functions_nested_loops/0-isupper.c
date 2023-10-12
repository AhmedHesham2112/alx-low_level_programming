#include "main.h"

/**
 * _isupper  - check for uppercase character.
 * @c: input number
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
