#include <stdio.h>
#include "main.h"
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2 followed by a new line
 * Return: ALways 0 (Success)
 */

int main(void)
{
	long int i, j, k, j0, j1, k0, k1;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j0 = j / 1000000000;
	j1 = j % 1000000000;
	k0 = k / 1000000000;
	k1 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k0 + (k1 / 1000000000));
		printf("%lu", k1 % 1000000000);
		k0 = k0 + j0;
		j0 = k0 - j0;
		k1 = k1 + j1;
		j1 = k1 - j1;
	}

	_putchar(10);

	return (0);
}

