/**
 * print_rev - prints the reverse of a string
 * @s: param
 * Return: nothing
 */

#include "main.h"

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (; i > 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
