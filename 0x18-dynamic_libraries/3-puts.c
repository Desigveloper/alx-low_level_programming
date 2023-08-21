/**
 * _puts - prints string to the stdout
 * @str:string  param
 * Return: nothing
 */

#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10); /* ASCII code for new linen */
}
