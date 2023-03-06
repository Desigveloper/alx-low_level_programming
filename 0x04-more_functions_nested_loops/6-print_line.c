#include "main.h"

/**
 * print_line - prints a line in the terminal
*/

void print_line(int n)
{
	int i = 0;

	do
	{
		_putchar('_');
		i++;
	}
	while (i < n);

	_putchar('\n');
}
