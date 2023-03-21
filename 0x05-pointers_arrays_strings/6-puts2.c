/**
 * puts2 - prints every other character in a string
 * @str: string param
 */

#include "main.h"

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchat('\n');
}
