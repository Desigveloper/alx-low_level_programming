/**
 * main - entry point
 * @argc: argument counter
 * @argv: pointer string array
 *
 * Return: 0 (success)
 */
#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
