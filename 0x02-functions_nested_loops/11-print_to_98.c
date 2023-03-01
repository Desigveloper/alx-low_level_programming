#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints from a given number to 98 in order
 * @n: parameter reprensenting the given number
*/

void print_to_98(int n)
{
	int cap_num = 98;
	
	if (n > cap_num)
	{
		while (n >= cap_num)
		{
			if (n != cap_num)
			{
				printf("%d, ", n);
				n--;
			}
		}
	} else
	{
		while (n <= cap_num)
		{
			if (n != cap_num)
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	putchar(10);/*ASCII character for new line*/
}
