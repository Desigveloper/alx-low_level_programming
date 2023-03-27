/**
 *  _print_rev_recursion - print the reverse of a strig
 * @s: string to be reversed
 * Returns: nothing
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
