/**
 * _strcat - concatenates two strings
 * @dest: destination param
 * @src: source param
 * Return: returns concatenated string value in dest
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dlen++;

	for (i = 0; src[i] != '\0'; i++)
		slen++;

	for (i = 0; i <= src_len; i++)
		dest[dlen + i] = src[i];

	return (dest);
}
