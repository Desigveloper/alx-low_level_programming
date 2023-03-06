#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: parameter n
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
