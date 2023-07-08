/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the specified index */
	*n |= (1ul << index);

	return (1);
}
