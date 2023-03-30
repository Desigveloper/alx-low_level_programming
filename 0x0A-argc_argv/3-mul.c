/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer string array
 */

#include "main.h"

int main(int argc, char argv[])
{
	int n1, n2;
	long product;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * (argv[2]);
		printf("%ld\n", product);
	}

	return (0);
}
