#include "main.h"

/**
 * print_numbers - prints numbers 0123456789
 * Return: void
*/

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}

	_putchar(10);
}
