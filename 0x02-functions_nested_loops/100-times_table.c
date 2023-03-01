#include "main.h"

/**
 * print_times_table - Prints the multipliction table of a given a number
 * @n: parameter
 * @product: parameter
 * _if_100s - prints the outcome of at 100s
 *_if_10s -print the outcome at 10s
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

void _if_100s(int product)
{
	int c1, c2, c3;

	c1 = product / 100;
	c2 = (product - 100) / 10;
	c3 = product % 10;

	_putchar(',');
	_putchar(' ');
	_putchar('0' + c1);
	_putchar('0' + c2);
	_putchar('0' + c3);
}


void _if_10s(int product)
{
	int c1, c2;

	c1 = product / 10;
	c2 = product % 10;

	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar('0' + c1);
	_putchar('0' + c2);
}
