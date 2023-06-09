/**
 * is_palindrome - Takes a pointer to a string s and returns 1 or 0
 * @s: param, pointer to sring to be compared
 *
 * Return: 1 if s is a palindrome, and 0 otherwise
 */

#include "main.h"

int is_palindrome(char *s)
{
	int cLen = print_str_len(s);

	if (cLen <= 1)
		return (1);
	
	else if (*s != s[cLen - 1])
		return (0);
	
	_putchar(*s);
	return(palindrome_helper_func(s, cLen, 1));

}

/**
 * print_str_len - Prints the length of a string.
 * @str: the string to be printed
 * Return: length of string
 */
int print_str_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + print_str_len(str + 1));
}

/**
 * palindrome_helper_func - Takes a pointer to a string s and returns 1 or 0
 * @s: param1, pointer to sring to be compared
 * @cLen: param2, character length
 * @i, param3, iterator
 *
 * Return: 1 if s is a palindrome, and 0 otherwise
 */
int palindrome_helper_func(char *s, int cLen, int i)
{
	if (i >= cLen / 2)
		return (1);

	else if (s[i] != s[cLen - 1 -i])
		return (0);

	_putchar(s[i]);
	return (palindrome_helper_func(s, cLen, i + 1));
}
