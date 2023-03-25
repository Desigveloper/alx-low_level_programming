/**
 * _strcat - concatenates two strings
 * @dest: destination param
 * @src: source param
 *
 *  Return: concatenated string value in dest
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;
	int i;

	while (*dest != '\0')
		dlen++;

	while (*src != '\0')
		slen++;


	for (i = 0; i <= slen; i++)
	{
		dest[dlen + i] = src[i];
	}

	return (dest);
}
