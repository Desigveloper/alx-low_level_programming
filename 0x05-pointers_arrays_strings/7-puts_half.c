/**
 * puts_half - splits the string into two parts and print the last half
 * @str: param
 */

#include "main.h"

void puts_half(char *str)
{
	int i, mid, len = 0;
	char righthand;

	while (str[i++])
	{
		len++;
	}

	/* Checking whether str is odd or even */
	if (len % 2 == 0)
		mid = len / 2;
	else
		mid = (len + 1) % 2;


	for (i = mid; i < len; i++)
	{
		righthand = str[i];

		_putchar(righthand);
	}

	_putchar('\n');


}
