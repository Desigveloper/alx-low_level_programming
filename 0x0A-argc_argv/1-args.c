/**
 * main - the entry point
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

#include "main.h"

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int counter = 0;

	for(i = 0; i < argc; i++)
	{
		counter++;
	}

	printf("%d\n", counter);

	return 0;

}
