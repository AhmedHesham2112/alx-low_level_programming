#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

int j;

int x;

int y;

for (i = '0'; i <= '9'; i++)
	{
	for (j = '0'; j <= '9'; j++)
	{
	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x >= i && y > j)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(x);
				putchar(y);
			if (i == '9' && j == '8' && x == '9' && y == '9')
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
	}
putchar('\n');
return (0);
}
