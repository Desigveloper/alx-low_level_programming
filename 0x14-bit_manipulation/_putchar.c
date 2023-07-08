/**
 * putchar - prints a single character
 * @c: char argument
 * Return: an interger
 */

#include "main.h"

int _putchar(char c)
{
	write(1, &c, 1);

	return (c);
}
