#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error\n");
	else
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
		{
			if (atoi(argv[1]) / 25 != 0)
				printf("%d\n", (atoi(argv[1]) / 25) + (atoi(argv[1]) % 25));
			else if (atoi(argv[1]) / 10 != 0)
				printf("%d\n", (atoi(argv[1]) / 10) + (atoi(argv[1]) % 10));
			else if (atoi(argv[1]) / 5 != 0)
				printf("%d\n", (atoi(argv[1]) / 5) + (atoi(argv[1]) % 5));
			else if (atoi(argv[1]) / 2 != 0)
				printf("%d\n", (atoi(argv[1]) / 2) + (atoi(argv[1]) % 2));
			else if (atoi(argv[1]) / 1 != 0)
				printf("%d\n", (atoi(argv[1]) / 1) + (atoi(argv[1]) % 1));
			else
				printf("0\n");
		}
	}
	return (0);
}
