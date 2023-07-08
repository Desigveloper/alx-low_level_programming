/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL.
 */

#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	/* If the input string is NULL, return 0 */
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Shift the result left by one bit */
		result <<= 1;

		if (b[i] == '1')
			result += 1;
	}

	/* Return the resulting unsigned int */
	return (result);
}
