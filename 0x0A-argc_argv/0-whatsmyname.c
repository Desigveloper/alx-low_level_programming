/**
 * main - prints the name of the file using command line argument
 * @argc: argument count
 * @argv: passed aruguments
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int ch = 0;

	for (; ch < argc; ch++)
		printf("%s\n", *(argv + 0));

	return (0);
}
