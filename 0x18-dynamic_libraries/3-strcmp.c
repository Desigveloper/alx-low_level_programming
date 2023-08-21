/**
 * _strcmp - compares two strings
 * @s1: string param 1
 * @s2: string param 2
 * Return: the differece of s1 and s2
 */
#include "main.h"

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

