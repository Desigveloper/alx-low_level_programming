#include "main.h"

/**
 * print_alphabet - Prints all lower case alphabets to z
*/

void print_alphabet(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}

	_putchar(10);
}
