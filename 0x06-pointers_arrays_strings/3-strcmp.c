/**
 * _strcmp - compares two strings
 * @s1: string param 1
 * @s2: string param 2
 * Return: the differece of s1 and s2
 */
#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, outcome;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (0);
	}
}
