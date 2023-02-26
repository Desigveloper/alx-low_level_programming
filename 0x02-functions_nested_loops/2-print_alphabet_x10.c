#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets a-z on 10 line/
*/

void print_alphabet_x10(void)
{
	int count, ch;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 97; ch <= 122; ch++)
		{
			_putchar(ch);
		}
		_putchar(10);
	}
}
