#include "main.h"

/**
 * malloc_checked - Takes an unsigned int b returns ptr to an allocated memory
 *
 * @b: param- size
 *
 * Return: a pointer to the allocated memory terminates with value 98
 */
void *malloc_checked(unsigned int b)
{
	void *p_mem;

	p_amem = malloc(b);

	if (p_mem == NULL)
		exit(98);

	return (p_mem);

}

