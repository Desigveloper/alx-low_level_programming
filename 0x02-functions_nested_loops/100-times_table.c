#include "main.h"

/**
 * print_times_table - Prints the multipliction table of a given a number
 * @n: parameter
*/

void print_times_table(int n)
{
	int row, col,  c1, c2, c3, product;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (n >= 0 && n <= 15)
			{
				product = row * col;
				if (product >= 100)
				{
					c1 = product / 100;
					c2 = (product - 100) / 10;
					c3 = product % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c1);
					_putchar('0' + c2);
					_putchar('0' + c3);
				} else if (product >= 10)
				{
					c1 = (product) / 10;
					c2 = (product) % 10;

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c1);
					_putchar('0' + c2);

				} else
				{
					if (col != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}

					_putchar('0' + product);
				}
			}
		}

		_putchar('\n');

	}
}
