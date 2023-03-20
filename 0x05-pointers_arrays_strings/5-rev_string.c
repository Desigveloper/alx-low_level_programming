/**
 * rev_string - print the reverse of a string
 * @s: param
 */

#include "main.h"

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	while (i > 0)
	{
		i--;

		_putchar(s[i]);
	}

	_putchar('\n');
}
