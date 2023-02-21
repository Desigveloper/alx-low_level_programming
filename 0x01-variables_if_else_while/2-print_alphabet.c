#include <stdio.h>

/**
 * main - The entry posint of program
 *
 * Return: Alays returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		ch = tolower(ch);
		putchar(ch);
	}

	return (0);
}
