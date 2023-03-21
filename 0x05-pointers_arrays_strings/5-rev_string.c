/**
 * rev_string - print the reverse of a string
 * @s: param
 */

#include "main.h"

void rev_string(char *s)
{
	int i = 0, length = 0, mid;
	char temp; /* temporary hold string */

	mid = length / 2;

	while (s[i++])
		length++;


	for (i = length - 1; i >= mid; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i -1] = temp;
	}
}
