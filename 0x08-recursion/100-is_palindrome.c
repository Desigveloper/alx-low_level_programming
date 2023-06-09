#include "main.h"

/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int iStrlen = print_strlen(s);

	return (palindrome_checker(s, 0, iStrlen - 1));
}


/**
 * print_strlen - a helper function that calculates the length of 
 * a given string using recursion.
 *
 * @str: the string to be calculated
 * Return: length of string
 */

int print_strlen(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + print_strlen(str + 1));

}


/**
 * palindrome_checker - checks if string is palindrome.
 * @s: string base address.
 * @x1: left index.
 * @x2: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrome_checker(char *str, int iStrlen, int i)
{
	if (str[iStrlen] == str[i])
	{
		if (iStrlen > i / 2)
			return (1);
		else
			return (palindrome_checker(str, iStrlen + 1, i - 1));
	}

	return (0);
}

