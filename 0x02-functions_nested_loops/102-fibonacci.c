#include "main.h"
#include <stdio.h>

/**
 * main - program entry
 *
 * Return: Always returns 0
*/

int main(void)
{
	fibonacci();
	return (0);
}

/**
 * fibonacci - Prints the sum of preceeding 2 numbers of a number
*/
void fibonacci(void)
{
	int i = 1, upper = 50;
	long min = 1, max = 2;

	while (i <= upper)
	{
		if (i == 1)
			printf("%ld", min);
		else if (i == 2)
			printf(", %ld", max);
		else
		{
			max += min;
			min = max - min;
			printf(", %ld", max);
		}
		i++;
	}
	_putchar('\n');
}
