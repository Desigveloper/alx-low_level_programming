#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: parameter 
*/

void print_diagonal(int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		_putchar(' ' * i);
		_putchar('\\');
	}
	_putchar('\n');
}
