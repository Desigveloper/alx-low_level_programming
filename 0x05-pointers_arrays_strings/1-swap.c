/**
 * swap_int - takes two integers and swap them
 * @a: pointer para 1
 * @pointer pare 2
 * returns: Returns nothing
 */

#include "main.h"

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
