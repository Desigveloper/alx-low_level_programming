/**
 * rev_string - print the reverse of a string
 * @s: param
 */

#include "main.h"

void rev_string(char *s)
{
	int i = 0, len = 0;
	char mid, temp; /* temp - temporary hold string */

	mid = len / 2;

	while (s[i++])
	{
		len++;
	}


	for (i = len - 1; i >= mid; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
