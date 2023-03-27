/**
 * puts_recursion - prints a string
 * @s: string to be recursed
 * Return: nothing
 */
#include "main.h"

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
			return;
	}
	_puts_recursion(s[i] + 1);
}
