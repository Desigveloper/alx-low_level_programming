#include "main.h"

/**
 * create_array -creates an array of chars, and initializes
 *
 * @size: array size
 *
 * @c: chars for initialization
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	if (size == 0)
		return (NULL);
	x = malloc(size * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}

