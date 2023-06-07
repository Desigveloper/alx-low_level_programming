/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: param pointer to the string to be printed
 *
 * Return: none if success
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1); /* recursive call */

	_putchar(*s); /* print character */
}
