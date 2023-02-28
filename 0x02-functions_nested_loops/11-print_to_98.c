#include <stdio.h>

/**
 * print_to_98 - Prints from a given number to 98 in order
 * @n: parameter reprensenting the given number
*/

void print_to_98(int n)
{
	int cap_num = 98;

	while(n != cap_num)
	{
		if(n > cap)
		{
			printf(n);
			_putchar(',');
			_putchar(' ');
			n--;
		} else
		{
			printf(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	putchar(10);/*ASCII character for new line*/
}
