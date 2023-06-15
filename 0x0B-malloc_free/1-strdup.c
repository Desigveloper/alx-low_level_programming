/**
 * _strdup -pointer to a new string which is a duplicate of the string str
 *
 * @str: string to copy
 *
 * Return: a pointer to the array, or NULL if it fails
 */

#include "main.h"

char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptrStr;

	if (str == NULL)
		return (NULL);


	for (i = 0; str[i]; i++)
		;

	i++;

	ptrStr = malloc(i * sizeof(char));

	if (ptrStr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		*(ptrStr + j) = *(str + j);

	return (ptrStr);
}

