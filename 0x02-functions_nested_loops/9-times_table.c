#include "main.h"

/**
 * times_table - Prints the multiplication of 9 table
 * @void: function returns nothing
*/

void times_table(void)
{
	int row, col,  c1, c2, n; 

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			n = row * col;
			if (n >= 10)
			{
				c1 = (row * col) / 10;
				c2 = (row * col) % 10;

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

				_putchar('0' + n)
			}
		}

		_putchar('\n');

	}
}
