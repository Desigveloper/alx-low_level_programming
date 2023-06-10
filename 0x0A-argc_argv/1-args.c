/**
 * main - prints the number of arguments passed  using command line argument
 * @argc: argument count
 * @argv: passed aruguments
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[]__attribute__((unused)))
{
	int iNumOfArgs = argc;

	printf("%d\n", iNumOfArgs - 1);

	return (0);
}
