#include "function_pointers.h"

/**
 * array_iterator - executes a function given a param on each
 * element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
