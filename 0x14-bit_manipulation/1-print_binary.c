/**
 * print_binary - Takes unsigned int as input and prints 
 * the binary representation of a number
 * 
 * @n: the number to print
 * Return: void
 */

#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i;

	/* Find the most significant bit */
	for (i = 0; i < 63; i++)
	{
		mask <<= 1;
		if (mask > n)
			break;
	}

	/* Print each bit from most significant to least significant */
	for (; i >= 0; i--)
	{
		if (n & (1ul << i))
			putchar('1');
		putchar('0');
	}
}
