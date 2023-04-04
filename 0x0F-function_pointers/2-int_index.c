#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be iterated over
 * @size: size of array
 * @cmp: pointer to compare function
 *
 * Return: index of first element not 0 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(*(array + 1)) != 0)
				return (i);
			i++;
		}

	return (-1);
}
