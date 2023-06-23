/**
 * main - perfroms simple operations
 * @argc: number of args
 * @argv:poitn to point of arrays
 *
 * Return: 0 (Success)
 */

#include "3-calc.h"

int main(int argc, char **argv)
{
	int a1, a2, output;
	char ch;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(*(argv + 1));
	a2 = atoi(*(argv + 3));

	func = get_op_func(*(argv + 2));

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	ch = *argv[2];

	if ((ch == '/' || ch == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = func(a1, a2);

	printf("%d\n", output);

	return (0);
}
