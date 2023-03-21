/**
 * puts2 - prints every other character in a string
 * @str: string param
 */

#include "main.h"

void puts2(char *str)
{
	int a, i;

	for (a = 0; str[a] != '\0'; i++)
	{}

	for (i = 0; i < a; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
