/**
 * _strncpy - copies a number of char from src to dest
 * @dest: destination string param
 * @src: source string param
 * @n: number of copied char
 *
 * Return: dest copied value
 */

#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
