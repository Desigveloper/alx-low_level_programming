/**
 * main - the entry point
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int counter;
	for(counter = 0; counter < argc; counter++)
		;

	printf("%d", counter);

	return 0;

}
