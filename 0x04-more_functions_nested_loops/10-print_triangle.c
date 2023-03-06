#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
*/

void print_triangle(int size)
{
	int i, j, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= i; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
