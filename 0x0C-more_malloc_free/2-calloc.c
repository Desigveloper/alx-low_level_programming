#include "main.h"

/**
 * _calloc - allocates memory for an array.
 *
 * @nmemb: allocated memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc_mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc_mem = malloc(nmemb * size);
	if (alloc_mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		alloc_mem[i] = 0;
	return (alloc_mem);
}
