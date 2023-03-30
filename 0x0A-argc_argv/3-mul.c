/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer string arrayi
 *
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int product = 0;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}
