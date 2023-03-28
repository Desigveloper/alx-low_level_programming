/**
 * is_prime_number - chcks if a inter is prime
 * @n: integer to be checked
 * Return: 1 if prime else 0
 */

#include "main.h"

int is_prime_number(int n)
{
	is_prime_number(n + 1);

	if (!(n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
		if (!(n <= 1))
			return (1);
	
	return (0);
}
