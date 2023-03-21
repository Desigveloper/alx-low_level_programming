/**
 * rev_string - print the reverse of a string
 * @s: param
 */

#include "main.h"

void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp; /* temp - temporary hold string */


	while (s[i++])
	{
		len++;
	}


	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
