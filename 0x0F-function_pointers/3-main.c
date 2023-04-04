#include "3-calc.h"

/**
 * main - perfroms simple operations
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a1, a2, result;
	char s;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];

	if ((s == '/' || s == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(a1, a2);

	printf("%d\n", result);

	return (0);
}
