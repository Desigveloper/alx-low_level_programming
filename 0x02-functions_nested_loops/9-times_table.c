#include "main.h"

/**
 * time_table - Prints the multiplication of 9 table
 * @void: function returns nothing
*/

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			_putchar('0' + (row * col));
		}

		_putchar('\n');
	}
}
