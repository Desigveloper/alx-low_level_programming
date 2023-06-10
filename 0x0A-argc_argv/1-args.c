/**
 * main - prints the number of arguments in the using command line argument
 * @argc: argument count
 * @argv: passed aruguments
 * Return: 0 (success)
 */

#include "main.h"

int main(int argc, char *argv[]__attribute__((unused)))
{
        int iNumOfArgs = argc;

	printf("%d\n", iNumOfArgs);

	return (0);
}
