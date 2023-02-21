#include <stdio.h>

/**
 * main - The entry point of program
 *
 * Return: Always returns 0
 */
int main(void)
{
	char chlow, chcap;

	for (chlow = 'a'; chlow <= 'z'; chlow++)
	{
		putchar(chlow);
	}

	for (chcap = 'A'; chcap <= 'Z'; chcap++)
	{
		putchar(chcap);
	}

	putchar('\n');
	return (0);
}
