#include "main.h"

/**
 * rot13 -  encodes a string into rot13.
 * @s: input string.
 * Return: encoded string.
 */

char *rot13(char *s)
{
	int i, j;
	char c[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char n[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
				{
				s[i] = n[j];
				break;
				}
		}
	}
	return (s);
}
