#include "main.h"

/**
 * print_times_table - Prints the multipliction table of a given a number
 * @n: parameter
*/


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

/**
 * _if_100s - displays products over 100
 * Discription: if the product of multipliction is 10+
 *      splits the numbers and displays them them
 * @p100: parameter
 */
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

/**
 * _if_10s - displays products over 10
 * Discription: if the product of multipliction is 10+
 *	splits the numbers and displays them them
 * @p10: parameter
 */

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
