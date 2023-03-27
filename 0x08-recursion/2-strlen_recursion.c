/**
 * _strlen_recursion - prints the length of a string
 * @s: strig to be counted
 * Return: length of string
 */

#include "main.h"

int _strlen_recursion(char *s)
{
	int strlen = 0;
	int i = 0;

	if (s[i] != '\0')
	{
		strlen++;
		strlen += _strlen_recursion(s + (i + 1));
	}
	return (strlen);
}
