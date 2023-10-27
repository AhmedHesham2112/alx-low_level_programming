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
	int change = 0;
	int reminder = 0;

	if (argc != 2)
		printf("Error\n");
	else
	{
		if (atoi(argv[1]) <= 0)
			printf("0\n");
		else
		{
			change = atoi(argv[1]) / 25;
			reminder = atoi(argv[1]) % 25;
			change += reminder / 10;
			reminder = reminder % 10;
			change += reminder / 5;
			reminder = reminder % 5;
			change += reminder / 2;
			reminder = reminder % 2;
			change += reminder / 1;
			printf("%d\n", change);
		}
	}
	return (0);
}
