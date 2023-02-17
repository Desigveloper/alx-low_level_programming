#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: Always return 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (signed long)sizeof(short));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
