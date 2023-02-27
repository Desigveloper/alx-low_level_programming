#include "main.h"

/**
 * print_last_digit - Printsthe last digit of series of numbers
 * @num: argument- takes an int value and pass to the function at execution
 * Return: Returns the number
*/

int print_last_digit(int num)
{
	int d = num % 10;

	if (d < 0)
	{
		d = -(d);
		_putchar('0' + d);
		return (d);
	}

	_putchar(d + '0');
	return (d);
}
