/**
 * puts_recursion - prints a string
 * @s: string to be recursed
 * ReturnsO nothing
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
