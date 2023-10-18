#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: input string.
 * Return: upper case string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
