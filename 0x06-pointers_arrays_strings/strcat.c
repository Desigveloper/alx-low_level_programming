/**
 * *_strcat - concatenates two strings
 * @dest: destination param
 * @src: source param
 * Return: returns concatenated value in dest
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		src_len++;

	for (i = 0; i <= src_len; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
