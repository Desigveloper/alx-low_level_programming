#include "main.h"

/**
 * main - entry point. adds positive numbers
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 if no errors, else
 */

int main(int argc, char *argv[])
{
	int i, j, total = 0;

	if (argc < 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}