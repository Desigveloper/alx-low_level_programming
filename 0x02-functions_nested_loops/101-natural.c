#include <stdio.h>
#include  "main.h"

/**
 * main - The entry point of program
 *
 * sum_of_all_multiples - Print the sum of all multiples of
 *	3 or 5 below 1024
 * Return: Always returns zero;
 */

int main(void)
{
	sum_of_all_multiples();
	return (0);
}

void sum_of_all_multiples(void)
{
	int i,  max = 1024, sum = 0;

	for (i = 0; i < max; i++)
	{
		if ((i % 3 != 0) || (i % 5 != 0))
		{
			continue;
		}
		else
		{
			sum += i;
		}
		printf("%d", sum);
		_putchar(10);
	}

}
