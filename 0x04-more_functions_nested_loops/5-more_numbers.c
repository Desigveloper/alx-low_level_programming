#include "main.h"

/**
 * more_numbers - prints 10 rows of numbers 0 to 14
*/

void more_numbers(void)
{
	int row, n, n2;

	for (row = 0; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{

			n2 = n % 10;

			if (n >= 10)
			_putchar('n');
			_putchar(n2 + '0');
		}
		_putchar('\n');
	}
}
