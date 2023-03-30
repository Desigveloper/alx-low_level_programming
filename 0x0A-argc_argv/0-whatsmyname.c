/**
 * main - prints the name of the file using command line argument
 * @argc: argument count
 * @argv: passed arugument
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[])
{
	int ch = 0;

	while (ch < argc)
	{
		printf("%s\n", argv[ch]);
		ch++;
	}

	return (0);
}
