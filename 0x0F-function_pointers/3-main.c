#include "3-calc.h"

/**
 * main - run the code
 * @argc: no. of arguments.
 * @argv: the characters inside the arguments.
 * Return: output of the operation.
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = func(a, b);
	printf("%d\n", res);
	return (0);
}
