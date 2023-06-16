/**
 * malloc_checked - Takes an unsigned int b returns ptr to an allocated memory
 *
 * @b: param- size
 *
 * Return: a pointer to the allocated memory terminates with value 98
 */

#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *p_alloc_mem;

	p_alloc_mem = malloc(b);

	if (p_alloc_mem == NULL)
		exit(98);

	return (p_alloc_mem);

}

