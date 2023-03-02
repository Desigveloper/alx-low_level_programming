#include <stdio.h>

/**
 * main - Entry point
 * Return: Always returns 0
*/
void fibonacci(void);

int main(void)
{
	fibonacci();
	return (0);
}

/** 
 * finbonacci - prints fibonacci numbers less than 4000000
*/

void fibonacci(void)
{
	int i = 0;
	long x = 1, y = 2, sum = y;

	while (x + y < 4000000)
	{
		y += x;

		if (y % 2 == 0)
			sum += y;

		x = y - x;

		++i;
	}

	printf("%ld\n", sum);
}
