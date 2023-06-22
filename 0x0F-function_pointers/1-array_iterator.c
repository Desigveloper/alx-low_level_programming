/**
 * array_iterator - executes a function given a param on each
 * element of an array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function used
 * Return: nothing
 */

#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;


	for (unsigned int i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
