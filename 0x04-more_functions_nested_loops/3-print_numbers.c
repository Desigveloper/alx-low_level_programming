#include "main.h"

/**
 * print_numbers - Prints the numbers 0 to 9
 * followed by a new line
*/

void print_numbers(void)
{
	int i = 48;

	fo(i <= 57)
	{
		_putchar(i);
		i++;
	}

	_putchar(10); /* ACSII code for newline */
}
