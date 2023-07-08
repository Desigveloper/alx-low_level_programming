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
	unsigned long int display_mask = 1;
	int i;

	/* Find the most significant bit */
	for (i = 0; i < 63; i++)
	{
		display_mask <<= 1;

		if (display_mask > n)
			break;
	}

	/* Print each bit from most significant to least significant */
	for (; i >= 0; i--)
	{
		if (n & (1ul << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
