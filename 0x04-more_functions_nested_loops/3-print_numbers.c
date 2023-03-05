#include "main.h"

/**
 * print_numbers - prints number 0123456789
 * Return: void
 */

void print_numbers(void)
{
	int ch;
	
	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
