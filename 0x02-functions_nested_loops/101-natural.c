#include <stdio.h>
#include  "main.h"

/**
 * main - The entry point of program
 *
 * Return: Always returns zero;
 */

int main(void)
{
	sum_of_all_multiples();
	return (0);
}

/**
 * sum_of_all_multiples - Print the sum of all multiples of
 *	3 or 5 below 1024
*/
void sum_of_all_multiples(void)
{
	int i,  max = 1024, sum = 0;

	for (i = 0; i < max; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}
