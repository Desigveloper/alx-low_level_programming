/**
 * _putchar - prints a single character
 * @ch: character to be printed
 * Return: integer value of ch
 */

#include "main.h"

int _putchar(char ch)
{
	write(1, &ch, 1);

	return (ch);
}
