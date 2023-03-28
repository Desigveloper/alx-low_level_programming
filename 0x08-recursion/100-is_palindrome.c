#include "main.h"

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen_recurse(s) - 1));
}


/**
 * _strlen_recurse - Prints the length of a string.
 * @str: the string to be printed
 * Return: length of string
 */

int _strlen_recurse(char *str)
{
	if (str[0] != '\0')
		return (1 + _strlen_recurse(str + 1));
	return (0);
}


/**
 * palindrome_checker - checks if string is palindrome.
 * @s: string base address.
 * @x1: left index.
 * @x2: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrome_checker(char *s, int x1, int x2)
{
	if (s[x1] == s[x2])
		if (x1 > x2 / 2)
			return (1);
		else
			return (palindrome_checker(s, x1 + 1, x2 - 1));
	else
		return (0);
}
