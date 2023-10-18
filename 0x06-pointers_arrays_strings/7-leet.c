#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @s: input string.
 * Return: encoded string.
 */

char *leet(char *s)
{
	int i, j;
	char c[10] = "aAeEoOtTlL";
	char n[10] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
				s[i] = n[j];
		}
	}
	return (s);
}
