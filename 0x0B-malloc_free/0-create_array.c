/**
 * create_array -creates an array of chars, and initializes
 *
 * @size: array size
 *
 * @c: chars for initialization
 *
 * Return: a pointer to the array, or NULL if it fails
 */

#include "main.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cArr;

	if (size == 0)
		return (NULL);
	
	cArr = malloc(size * sizeof(char));
	
	if (cArr == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		*(cArr + i) = c;

	return (cArr);
}
