/**
 * _memset - fills the memory with aconstant byte
 * @s: param of a pointer to memery area to be filled
 * @b: param of constant byte
 * @n: param of unsigned integer of number of bytes
 *
 * Return: pointer (s) if success
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n;)
		*(s + i++) = b;

	return (s);
}

