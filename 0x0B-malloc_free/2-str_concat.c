/**
 * str_concat - joins two strs.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on failure
 */

#include "main.h"

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x, y;
	char *ch;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; *(s1 + i); ++i)
			;


	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; *(s2 + j); ++j)
			;


	x = i + j + 1;

	ch = malloc(x * sizeof(char));

	if (ch == NULL)
		return (NULL);

	for (y = 0; y < i; ++y)
		*(ch + y) = *(s1 + y);

	for  (y = 0; y < j; ++y)
		*(ch + (y + i)) = *(s2 + y);

	*(ch + (i + j)) = '\0';
	return (ch);
}

