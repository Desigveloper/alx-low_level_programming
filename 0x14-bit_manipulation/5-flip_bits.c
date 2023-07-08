/**
 * flip_bits - gets unsigned integers and flip their bits
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped to get from n to m
 */

#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in the XOR difference */
	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
