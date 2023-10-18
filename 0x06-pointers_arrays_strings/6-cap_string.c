#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: input string.
 * Return: upper case string.
 */

char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ' || s[i] == '	' || s[i] == '\n' ||
	s[i] == ',' ||  s[i] == ';' ||  s[i] == '.' ||  s[i] == '!' ||
	s[i] == '?' ||  s[i] == '"' ||  s[i] == '(' ||  s[i] == ')'
	|| s[i] == '{' || s[i] == '}') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
