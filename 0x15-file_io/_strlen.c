/**
 * _strlen - counts and return the length of a given string
 * @str: the string to be counted
 *
 * Return: length of string or 0 if NULL
 */

#include "main.h"

int _strlen(char *str)
{
	int i, strLen = 0;

	if (str == NULL)
		return 0;

	for (i = 0; *(str + i) != '\0'; i++)
		strLen++;
    
	return (strLen);
}
