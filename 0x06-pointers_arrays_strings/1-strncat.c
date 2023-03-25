/**
 * _strncat - concatenates all or a part of src to dest
 * @dest: string destination param
 * @src: string src param
 * @n: index/substring param
 * Return: Concatenated value in dest
 */

#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0,
	    i;

	while (dest[dlen] != '\0')
		dlen++;

	for (i = 0; i <= src[n], i++)
		dest[dlen + 1] = src[i];

	return (dest);
}
