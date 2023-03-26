/**
 * _strcmp - compares two strings
 * @s1: string param 1
 * @s2: string param 2
 * Return: the differece of s1 and s2
 */
#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int ch;

	for (ch = 0; s1[ch] != '\0' || s2[ch] != '\0'; ch++)
	{
			return (s1[ch] - s2[ch]);
	}
}
