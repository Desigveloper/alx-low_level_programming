#include "main.h"

/**
 * print_last_digit - Printsthe last digit of series of numbers
 * @c: argument- takes an int value and pass to the function at execution
 * Return: Returns the number
*/

int print_last_digit(int num)
{
	if (num > 9 || num < -9)
		num = num % 10;
	return (num);
}
