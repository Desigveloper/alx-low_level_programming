#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 * @void: returns nothing
*/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10 &&  m < 10)
			{
				_putchar('0');
				write(h);
				_putchar(':');
				_putchar('0');
				write(m);
				_putchar('\n');
			} else if (h < 10 && m > 10)
			{
				_putchar('0');
				write(h);
				_putchar(':');
				write(m);
				_putchar('\n');
			} else if (h > 10 && m < 10)
			{
				write(h);
				_putchar(':');
				_putchar('0');
				write(m);
				_putchar('\n');
			} else
			{
				write(h);
				_putchar(':');
				write(m);
				_putchar('\n');
			}
		}
	}
}
