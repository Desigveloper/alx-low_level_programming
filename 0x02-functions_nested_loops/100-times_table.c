#include "main.h"

/**
 * print_times_table - Prints the multipliction table of a given a number
 *
 * @n: parameter
 * @int: parameter
*/

void _if_100s(int);
void _if_10s(int);


void print_times_table(int n)
{
	int row, col, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				product = row * col;
				if (product >= 100)
				{
					_if_100s(product);
				}
				else if (product >= 10)
				{
					_if_10s(product);
				}
				else
				{
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}

					_putchar('0' + product);
				}
			}

		_putchar('\n');

		}
	}
}

/* The characters to display if product of multiplication greater than 100 */
void _if_100s(int p100)
{
	int c1, c2, c3;

	c1 = p100 / 100;
	c2 = (p100 - 100) / 10;
	c3 = p100 % 10;

	_putchar(',');
	_putchar(' ');
	_putchar('0' + c1);
	_putchar('0' + c2);
	_putchar('0' + c3);
}

/* If product of multiplication greater than 10 display this */
void _if_10s(int p10)
{
	int c1, c2;

	c1 = p10 / 10;
	c2 = p10 % 10;

	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + c1);
	_putchar('0' + c2);
}
