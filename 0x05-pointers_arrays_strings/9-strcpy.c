/**
 * *_dtrcpy - copies the string pointed to one pointer to other
 * @dest: recrive param
 * @src: source param
 */

#include "main.h"

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0, j = 0; src[i] != '\0', (j < i && src[j] != '\0'); i++, j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
