#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be iterated over
 * @size: size of array
 * @cmp: pointer to compared function
 *
 * Return: index of first element not 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array && !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
	}
}

