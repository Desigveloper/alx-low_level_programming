/**
 * _strpbrk - Searches the string s for any of the bytes in the string accept.
 *
 * @s: The string to search.
 * @accept: The string containing the bytes to match.
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	char *p_accept;

	while (*s != '\0')
	{
		for (p_accept = accept; *p_accept != '\0'; p_accept++)
		{
			if (*s == *p_accept)
				return (s);
		}

		s++;
	}

	return (NULL);
}
