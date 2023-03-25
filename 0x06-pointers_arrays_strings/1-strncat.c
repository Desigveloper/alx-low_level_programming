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
	int i;

	while (dest[dlen] != '\0')
		dlen++;

	while (src[slen] != '\0')
		slen++;

	for (i = 0; i < n, i++)
		dest[dlen + 1] = src[i];

	return (dest);
}
