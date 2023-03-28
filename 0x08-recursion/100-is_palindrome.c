/**
 * int is_palindrome - checks is a string is a palindrome
 * @s: string to be checked
 * Return: 1 if true else 0
 */

#include "main.h"

int is_palindrome(char *s)
{
	if (*s)
	{
		if (*s == rev_str(s))
		{
			return (1);
			is_palindrome(s + 1);
		}
	}

	return (0);
}

/**
 * rev_str - helper func to reverse string so it compares to s
 * @str: string to be reversed
 * Return: reversed string
 */

char rev_str(char str)
{
	int i = 0;

	if (str[i] != '\0')
	{
		rev_str(str + 1);
		return (str[i]);
	}

}
