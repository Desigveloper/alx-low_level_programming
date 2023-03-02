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
	int i, upper = 50;
	long min = 1, max = 2;

	for (i = 1; i <= upper; i++)
	{
		if (i <= max)
		{
			if (i != min)
			{
				printf(", ");
			}
			printf("%d", i);
		}
		else
		{
			max += (max - min);
			printf(", %ld", max);
		}

	}
	_putchar('\n');
}
