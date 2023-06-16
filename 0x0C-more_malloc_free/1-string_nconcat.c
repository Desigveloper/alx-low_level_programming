/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: NULL if the function fails
 */

#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr_result;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; *(s1 + len1); ++len1)
			;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; *(s2 + len2); ++len2)
			;
	}

	if (len2 > n)
		len2 = n;

	ptr_result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr_result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(ptr_result + i) = *(s1 + i);

	for (i = 0; i < len2; i++)
		*(ptr_result + (i + len1)) = *(s2 + i);

	*(ptr_result + (len1 + len2)) = '\0';
	return (ptr_result);
}
