#include "main.h"

/**
 * print_sign() - Checks a number and print its sign +, - or 0
 * @c: argument- takes an int value and pass to the function at execution
 * Return: Returns 1 if greater than 0, -1 if less than 0 or 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	} else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
