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
	int dlen = 0;
	int slen = 0;

	while (dest[dlen] != '\0')
		dlen++;

	while (src[slen] != '\0' && slen < n)
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
