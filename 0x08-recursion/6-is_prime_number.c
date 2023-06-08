/**
 * is_prime_number - takes an int as input checks if it is a prime number
 * @n: integer to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

#include "main.h"

int is_prime_number(int n)
{
	return (is_prime_helper_func(n, n / 2));
}

/**
 * is_prime_helper_func - takes two integers as input, a numbera and a counter
 * @iNum: integer to be divided
 * @iCounter: param2, counter for iteration
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_helper_func(int iNum, int iCounter)
{
	if (iNum <= 1) /* base case*/
		return (0);

	if (iCounter == 1)
		return (1);

	if (iNum % iCounter == 0)
		return (0);

	return (is_prime_helper_func(iNum, iCounter - 1));

}
