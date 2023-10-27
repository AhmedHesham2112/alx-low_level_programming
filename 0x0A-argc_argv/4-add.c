#include <stdio.h>
#include <stdlib.h>

int is_num(char *c);

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * is_num - iterate through each argv to test if it's a number
 * @c: a argv
 * Return: true only if entire string is a number, false if not
 */

int is_num(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (!(c[i] >= '0' && c[i] <= '9'))
			return (0);
	}
	return (1);
}
