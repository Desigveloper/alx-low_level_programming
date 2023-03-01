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
	int i, num, upper = 50;

	for (i = 1; i <= upper; i++)
	{
		if (i <= 2)
		{
			if (i != 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", i);
		}
		else
		{
			num = (i - 1) + (i - 2);
			printf(", %d", num);
		}

	}
	_putchar('\n');
}
