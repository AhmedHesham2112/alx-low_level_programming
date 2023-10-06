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

for (i = '0'; i <= '9'; i++)
	{
	for (x = '0'; x <= '9'; x++)
		{
		if (x > i)
		{
			putchar(i);
			putchar(x);
		if (i == '8' && x == '9')
			break;
		putchar(',');
		putchar(' ');
		}
		}
	}
putchar('\n');
return (0);
}
