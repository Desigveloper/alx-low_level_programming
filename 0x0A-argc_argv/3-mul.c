/**
 * main - the entry point. Prints the product of two argumentg numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 (success) or 1 if an error
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int result;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
