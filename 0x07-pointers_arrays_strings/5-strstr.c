/**
 * _strstr - Locates the first occurrence of the substring needle in haystack.
 *
 * @haystack: A pointer to the string to search.
 * @needle: A pointer the substring to search for.
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	char *ptr_h, *ptr_n;

	while (*haystack != '\0')
	{
		ptr_h = haystack;
		ptr_n = needle;

		for (; *ptr_n != '\0' && *ptr_h == *ptr_n; ptr_n++)
			ptr_h++;

		if (*ptr_n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
