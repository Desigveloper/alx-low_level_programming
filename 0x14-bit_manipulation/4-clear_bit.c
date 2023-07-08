/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to clear the bit in
 * @index: the index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Clear the bit at the specified index */
	*n &= ~(1ul << index);

	return (1);
}
