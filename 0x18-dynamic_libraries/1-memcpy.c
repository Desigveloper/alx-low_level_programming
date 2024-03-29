#include "main.h"

/**
* _memcpy -> Memory copy
* @dest: the destination memory
* @src: source memory
* @n: number of bytes to be copied
* Return: string copied from source
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

