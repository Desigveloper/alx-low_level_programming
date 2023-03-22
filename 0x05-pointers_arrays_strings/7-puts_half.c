/**
 * puts_half - splits the string into two parts and print the last half
 * @str: param
 */

#include "main.h"

void puts_half(char *str)
{
	int i, j, mid, len = 0;
	char righthand;

	for (i = 0; str[i] != 0; i++)
	{
		len = i;
	}

	mid = len / 2;

	for (i = mid, j = 0; i <= len; i++, j++)
	{
		righthand = str[i];

		_putchar(righthand);
	}

	_putchar('\n');


}
