#include "main.h"

/**
 * print_triangle - prints a triangle
*/

void print_triangle(int size)
{
	int i, j, hashes;

	if (size <= 0)
		_putchar(0);

	for (i = 0; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}

		for (hashes = 1; hashes <= i; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
