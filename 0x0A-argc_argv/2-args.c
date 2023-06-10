/**
 * main - the entry point. prints all arguments recieve on a new line
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
