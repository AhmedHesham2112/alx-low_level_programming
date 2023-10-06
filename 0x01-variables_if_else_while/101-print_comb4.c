#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

int x;

int y;

for (i = '0'; i <= '9'; i++)
	{
	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x > i && y > x)
			{
				putchar(i);
				putchar(x);
				putchar(y);
			if (i == '7' && x == '8' && y == '9')
				break;
			putchar(',');
			putchar(' ');
			}
		}
	}
	}
putchar('\n');
return (0);
}
