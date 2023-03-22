/**
 * *_strcpy - copies the string pointed to one pointer to other
 * @dest: destination param
 * @src: source param
 * Return: copied value in dest
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{}


	for (j = i; (j < i && src[j] != '\0'); j++)
	{
		dest[j] = src[j];
	}


	for (j = j; j <= i; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
