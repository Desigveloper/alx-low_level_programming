/**
 * factorial - calculates the fatorial of agiven number
 * @n: number to whose fatorial to be calculated
 * Return: -1 for error, 1 for 0 and 1 or the factorial of the number
 */

#include "main.h"
int factorial(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
